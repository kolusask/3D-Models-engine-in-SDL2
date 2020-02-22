from math import sqrt

DENSITY = 50

points = list()
for ix in range(-DENSITY, DENSITY):
    x = float(ix) / DENSITY
    for iy in range(-DENSITY, DENSITY):
        y = float(iy) / DENSITY
        try:
            z = sqrt(1. - x*x - y*y)
        except:
            continue
        points.append([x, y, z])
        points.append([x, y, -z])
        points.append([z, x, y])
        points.append([-z, x, y])
        points.append([x, z, y])
        points.append([x, -z, y])

with open("../Models/point_sphere.3de", 'w') as file:
    for point in points:
        file.write('point {}\n'.format(str(point).replace('[', '{').replace(']', '}')))
