class Component:
    def write(self, file):
        pass


class Point(Component):
    def __init__(self, init_list):
        if len(init_list) == 3:
            self.x = init_list[0]
            self.y = init_list[1]
            self.z = init_list[2]
        else:
            raise Exception("Point contains 3 coordinates - {} passed".format(len(init_list)))

    def write(self, file):
        file.write("point {{ {}, {}, {} }}\n".format(self.x, self.y, self.z))


class Line(Component):
    def __init__(self, start, end):
        if type(start) == Point and type(end) == Point:
            self.start = start
            self.end = end
        else:
            raise Exception("Line can be initialized with two points only")

    def write(self, file):
        file.write("lineP {{ {{ {}, {}, {} }}, {{ {}, {}, {} }} }}".format(self.start.x, self.start.y, self.start.z,
                                                                           self.end.x, self.end.y, self.end.z))


class Curve(Component):
    def __init__(self, closed):
        self.points = list()
        self.closed = closed

    def add(self, comp):
        if type(comp) == Point:
            self._add_point(comp)
        elif type(comp) == Line:
            self._add_line(comp)
        elif type(comp) == Curve:
            self._add_curve(comp)

    def _add_point(self, point):
        self.points.append(point)

    def _add_line(self, line):
        self.points.append(line.start)
        self.points.append(line.end)

    def _add_curve(self, curve):
        for point in curve.points:
            self.points.append(point)

    def write(self, file):
        for i in range(1, len(self.points)):
            Line(self.points[i - 1], self.points[i]).write(file)
        if self.closed:
            Line(self.points[-1], self.points[0]).write(file)


class Model:
    def __init__(self, file_name):
        self.file_name = file_name
        self._components = list()

    def add(self, comp):
        if issubclass(type(comp), Component):
            self._components.append(comp)
        else:
            try:
                self._add_list(comp)
            except bool:
                raise Exception("Only Components can be added to Model = {} found instead".format(type(comp)))

    def _add_list(self, components):
        if type(components) == list:
            for comp in components:
                self.add(comp)
        else:
            raise False

    def write(self):
        with open(self.file_name, 'w') as file:
            for comp in self._components:
                comp.write(file)