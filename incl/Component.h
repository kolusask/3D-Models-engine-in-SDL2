//
// Created by askar on 11.09.19.
//

#pragma once

#include "Drawable.h"
#include <memory>

class Point;

enum ComponentType { TYPE_POINT, TYPE_LINE };

struct Component : public Drawable {
    virtual ComponentType type() const = 0;
    virtual double distance() const = 0;
    virtual bool operator==(const std::shared_ptr<Point>& other) const = 0;

    static double sRangeMin, sRangeMax, sRange;

protected:
    uint8_t brightness() const;

    mutable double mDistance;

};
