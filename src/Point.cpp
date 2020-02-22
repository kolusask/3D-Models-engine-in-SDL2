//
// Created by askar on 10.09.19.
//

#include "../incl/Point.h"

bool Point::sMoved(false);
double Point::sX(0), Point::sY(0), Point::sZ(0);
double Point::sDiffLimit = 1. / UNIT_SIZE / PRECISION;

Point::Point(const Point& other) : mX(other.mX), mY(other.mY), mZ(other.mZ) {
    sX = sY = sZ = 0;
    put_on_plane();
}

Point::Point(const double x, const double y, const double z) : mX(x), mY(y), mZ(z) {
    sX = sY = sZ = 0;
    put_on_plane();
}

bool Point::operator==(const std::shared_ptr<Point>& other) const {
    return ((mX - other->mX) * (mX - other->mX) +
        (mY - other->mY) * (mY - other->mY) +
        (mZ - other->mZ) * (mZ - other->mZ)) < sDiffLimit;
}

int Point::get_plane_x() const { return mPlaneX; }

int Point::get_plane_y() const { return mPlaneY; }

ComponentType Point::get_type() const { return TYPE_POINT; }

double Point::get_distance() const {
    return mDistance = mY;
}

void Point::draw() const {
    uint8_t brightness = calculate_brightness();
    SDL_SetRenderDrawColor(sRenderer, brightness, brightness, brightness, 0xFF);
    SDL_RenderDrawPoint(sRenderer, mPlaneX, mPlaneY);
}

void Point::move(const Coordinate coord, const double dist) {
    switch(coord) {
        case COORD_X:
            mX += dist;
            if(!sMoved) {
                sX += dist;
                sMoved = true;
            }
            break;
        case COORD_Y:
            mY += dist;
            if(!sMoved) {
                sY += dist;
                sMoved = true;
            }
            break;
        case COORD_Z:
            mZ += dist;
            if(!sMoved) {
                sZ += dist;
                sMoved = true;
            }
            break;
    }
    put_on_plane();
}

void Point::release() { sMoved = false; }

void Point::turn_in_2d(double &x, double &y, const double phi) {
    double oldX = x;
    double oldY = y;
    x = oldX * cos(phi) - oldY * sin(phi);
    y = oldX * sin(phi) + oldY * cos(phi);
}

void Point::turn(const Coordinate Coordinate, const double angle) {
    mX -= sX;
    mY -= sY;
    mZ -= sZ;
    switch(Coordinate) {
        case COORD_X: turn_in_2d(mZ, mY, angle);
        break;
        case COORD_Y: turn_in_2d(mZ, mX, angle);
        break;
        case COORD_Z: turn_in_2d(mX, mY, angle);
        break;
    }
    mX += sX;
    mY += sY;
    mZ += sZ;
    put_on_plane();
}

void Point::put_on_plane() {
    mPlaneX = static_cast<int>(WIDTH / 2 + mX * UNIT_SIZE * exp(mY / PERSPECTIVE));
    mPlaneY = static_cast<int>(HEIGHT / 2 - mZ * UNIT_SIZE * exp(mY / PERSPECTIVE));
}
