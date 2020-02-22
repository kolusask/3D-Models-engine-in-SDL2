from random import random

with open("../Models/random_points.3de", 'w') as file:
    for i in range(16):
        file.write("point {{ {}, {}, {} }}\n".format(random() - 0.5, random() - 0.5, random() - 0.5))
