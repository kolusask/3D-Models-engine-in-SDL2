from e3d_constructor import *

model = Model("text.3de")

def reflect(p1, p2):
    np1 = Point([p1.x, -p1.y, p1.z])
    np2 = Point([p2.x, -p2.y, p2.z])
    model.add(Line(p1, p2))
    model.add(Line(np1, np2))
    model.add(Line(p1, np1))
    model.add(Line(p2, np2))

def make_points(x1, y1, x2, y2):
    reflect(Point([x1, 0.5, y1]), Point([x2, 0.5, y2]))

def make_coords(letters):
    for letter in letters:
        for coord in letter:
            make_points(*coord)

def shift_letter(letter, shift):
    return list(list(letter[i][j] + shift if j % 2 == 0 else letter[i][j] for j in range(4)) for i in range(len(letter)))

def align(letters):
    maxX = max(list(max(n) for n in ((max(coord[i] for i in range(0, 4, 2)) for coord in letter) for letter in letters)))
    avg = maxX / 2
    return list(list(list(coord[i] - avg if i % 2 == 0 else coord[i] for i in range(4)) for coord in letter) for letter in letters)


letters = []

shifts = [0, 2.2, 6.2, 8.4, 10.6, 12.8, 15]

for i in range(7):
    letters[i] = shift_letter(letters[i], shifts[i])

letters = align(letters)

make_coords(letters)

model.resize(0.7)
model.write()
