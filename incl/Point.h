//
// Created by askar on 10.09.19.
//

#ifndef ENGINE3D_POINT_H
#define ENGINE3D_POINT_H

#include <memory>
#include <SDL2/SDL.h>

#include "Component.h"
#include "constants.h"

class Point : public Component {
public:
    Point(const Point& other);
    Point(double x, double y, double z);
    static void release();
    int get_plane_x() const;
    int get_plane_y() const;
    ComponentType get_type() const override;
    double get_distance() const override;
    void draw() const override;
    void move(Coordinate coord, double dist);
    void turn(Coordinate Coordinate, double angle);
    bool operator==(const std::shared_ptr<Point>& other) const override;
private:
    static void turn_in_2d(double& x, double& y, double phi);
    void put_on_plane();
    double mX, mY, mZ;
    static double sX, sY, sZ;
    int mPlaneX, mPlaneY;
    static bool sMoved;
    static double sDiffLimit;
};


#endif //ENGINE3D_POINT_H
