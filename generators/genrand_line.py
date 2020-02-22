from random import random

with open("../Models/random_line.3de", 'w') as file:
    newX = random() - 0.5
    newY = random() - 0.5
    newZ = random() - 0.5
    for i in range(20000):
        oldX = newX
        oldY = newY
        oldZ = newZ
        newX = random() - 0.5
        newY = random() - 0.5
        newZ = random() - 0.5
        file.write("lineP {{ {{ {}, {}, {} }}, {{ {}, {}, {} }} }}\n".format(oldX, oldY, oldZ, newX, newY, newZ))
