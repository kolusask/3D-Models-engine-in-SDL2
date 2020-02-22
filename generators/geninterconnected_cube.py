from e3d_constructor import *

points = list()
for x in (-1, 1):
    for y in (-1, 1):
        for z in (-1, 1):
            points.append(Point([x, y, z]))

interCubeModel = Model("inter_cube.3de")

for p1 in points:
    for p2 in points:
        if p1 != p2:
            interCubeModel.add(Line(p1, p2))

interCubeModel.write()
