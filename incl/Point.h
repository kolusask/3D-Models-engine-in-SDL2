//
// Created by askar on 10.09.19.
//

#pragma once

#include <memory>
#include <SDL2/SDL.h>

#include "Component.h"
#include "constants.h"

class Point : public Component {
public:
    Point(const Point& other);
    Point(double x, double y, double z);

    static void release();
    int plane_x() const;
    int plane_y() const;
    ComponentType type() const override;
    double distance() const override;
    void draw() const override;
    void move(Coordinate coord, double dist);
    void rotate(Coordinate Coordinate, double angle);
    bool operator==(const std::shared_ptr<Point>& other) const override;
    bool visible() const;

private:
    static void rotate_in_2d(double& x, double& y, double phi);
    void project_to_plane();

    double mX, mY, mZ;
    static double sX, sY, sZ;
    int mPlaneX, mPlaneY;
    static bool sMoved;
    static double sDiffLimit;
};
