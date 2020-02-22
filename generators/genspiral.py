from math import pi, sin, cos

SMOOTHNESS = 250

height = -1.25
alpha = 0
with open("../Models/spiral.3de", 'w') as file:
    for i in range(SMOOTHNESS * 10):
        file.write("lineP {{ {{ {}, {}, {} }}, ".format(cos(alpha), sin(alpha), height))
        height += 0.01 * (25. / SMOOTHNESS)
        alpha += pi / SMOOTHNESS
        file.write("{{ {}, {}, {} }} }}\n".format(cos(alpha), sin(alpha), height))
