from math import sqrt
from e3d_constructor import *

DENSITY = 3
DIST_LIMIT = 0.9

points = list()
for ix in range(-DENSITY, DENSITY):
    x = float(ix) / DENSITY
    for iy in range(-DENSITY, DENSITY):
        y = float(iy) / DENSITY
        try:
            z = sqrt(1. - x*x - y*y)
        except:
            continue
        points.append(Point([x, y, z]))
        points.append(Point([x, y, -z]))

model = Model("inter_sphere.3de")

for p1 in points:
    for p2 in points:
        if p1.dist(p2) < DIST_LIMIT:
            model.add(Line(p1, p2))

model.write()
