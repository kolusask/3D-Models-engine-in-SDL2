//
// Created by askar on 11.09.19.
//

#pragma once

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
    ComponentType type() const override;
    double distance() const override;
    std::shared_ptr<Point> endpoint_1();
    std::shared_ptr<Point> endpoint_2();
    void render() const override;

private:
    std::shared_ptr<Point> mEndpoint1;
    std::shared_ptr<Point> mEndpoint2;

};
