//
// Created by askar on 11.09.19.
//

#ifndef ENGINE3D_COMPONENT_H
#define ENGINE3D_COMPONENT_H

#include <memory>
#include "Drawable.h"
//#include "Point.h"

class Point;

enum ComponentType { TYPE_POINT, TYPE_LINE };

struct Component : public Drawable {
    virtual ComponentType get_type() const = 0;
    virtual double get_distance() const = 0;
    virtual bool operator==(const std::shared_ptr<Point>& other) const = 0;
    static double sRangeMin, sRangeMax, sRange;
protected:
    uint8_t calculate_brightness() const;
    mutable double mDistance;
};


#endif //ENGINE3D_COMPONENT_H
