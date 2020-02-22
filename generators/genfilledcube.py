from e3d_constructor import *

DENSITY = 10

cubeModel = Model("point_cube.3de")
for i in range(DENSITY + 1):
    x = 2. / DENSITY * i - 1
    for j in range(DENSITY + 1):
        y = 2. / DENSITY * j - 1
        for k in range(DENSITY + 1):
            z = 2. / DENSITY * k - 1
            cubeModel.add(Point([x, y, z]))


cubeModel.write()
