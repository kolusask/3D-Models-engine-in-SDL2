//
// Created by askar on 10.09.19.
//

#pragma once

#include <algorithm>
#include <limits>
#include <list>
#include <memory>
#include <vector>

#include "Component.h"
#include "constants.h"
#include "Drawable.h"
#include "Line.h"
#include "Point.h"

class Model : public Drawable {
public:
    Model(const Model& other);
    explicit Model(SDL_Renderer* renderer);

    void set(const Model& other);
    void add(double x, double y, double z);
    void add(const std::shared_ptr<Line>& line);
    void add(std::shared_ptr<Point> p1, std::shared_ptr<Point> p2);

    // overrode from Drawable
    void draw() const override;
    void move(Coordinate coord, double dist);
    void rotate(Coordinate Coordinate, double angle);

private:
    void calculate_distances() const;
    template<typename T>
    void add_as(const std::shared_ptr<Component>& comp) {
        mComponents.push_back(std::make_shared<T>(*std::dynamic_pointer_cast<T>(comp)));
    }

    std::vector<std::shared_ptr<Component>> mComponents;
    std::vector<std::shared_ptr<Point>> mPoints;

};
