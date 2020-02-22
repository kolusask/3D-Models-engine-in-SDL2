from math import sqrt
from e3d_constructor import *

DENSITY = 50

sphereModel = Model("line_sphere.3de")
for ix in range(-DENSITY, DENSITY):
    uprightCurve = Curve(False)
    downrightCurve = Curve(False)
    upleftCurve = Curve(False)
    downleftCurve = Curve(False)
    x = float(ix) / DENSITY
    for iy in range(-DENSITY, DENSITY):
        y = float(iy) / DENSITY
        try:
            z = sqrt(1. - x*x - y*y)
        except:
            continue
        uprightCurve.add(Point([x, y, z]))
        downrightCurve.add(Point([x, y, -z]))
        upleftCurve.add(Point([y, x, z]))
        downleftCurve.add(Point([y, x, -z]))
    sphereModel.add(uprightCurve)
    sphereModel.add(downrightCurve)
    sphereModel.add(upleftCurve)
    sphereModel.add(downleftCurve)

sphereModel.write()
