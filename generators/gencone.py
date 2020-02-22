from e3d_constructor import *
from math import sin, cos, pi

SMOOTHNESS = 60

coneModel = Model("cone.3de")
base = Curve(True)
lower_center = Point([0, 0, -1])
upper_center = Point([0, 0, 2])
lines = list()
alpha = 0.
for i in range(SMOOTHNESS):
    base.add(Point([cos(alpha), sin(alpha), -1]))
    lines.append(Line(base.points[-1], lower_center))
    lines.append(Line(base.points[-1], upper_center))
    alpha += 2 * pi / SMOOTHNESS

coneModel.add([base, lines])
coneModel.write()
