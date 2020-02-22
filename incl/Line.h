//
// Created by askar on 11.09.19.
//

#ifndef ENGINE3D_LINE_H
#define ENGINE3D_LINE_H

#include <memory>
#include <SDL2/SDL.h>

#include "Component.h"
#include "Point.h"

class Point;

class Line : public Component {
public:
    Line(const Line& other);
    Line(std::shared_ptr<Point>& p1, std::shared_ptr<Point>& p2);
    Line(double p1x, double p1y, double p1z, double p2x, double p2y, double p2z);
    bool operator==(const std::shared_ptr<Point>& point) const override;
    ComponentType get_type() const override;
    double get_distance() const override;
    std::shared_ptr<Point> get_start();
    std::shared_ptr<Point> get_end();
    void draw() const override;
private:
    std::shared_ptr<Point> mStart;
    std::shared_ptr<Point> mEnd;
};


#endif //ENGINE3D_LINE_H
