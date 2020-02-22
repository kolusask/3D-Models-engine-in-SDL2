from e3d_constructor import *

DENSITY = 50

cubeModel = Model("point_cube.3de")
for i in range(DENSITY + 1):
    x = 2. / DENSITY * i - 1
    for j in range(DENSITY + 1):
        y = 2. / DENSITY * j - 1
        cubeModel.add(Point([-1, x, y]))
        cubeModel.add(Point([1, x, y]))
        cubeModel.add(Point([x, -1, y]))
        cubeModel.add(Point([x, 1, y]))
        cubeModel.add(Point([x, y, -1]))
        cubeModel.add(Point([x, y, 1]))

cubeModel.write()
