//
// Created by askar on 10.09.19.
//

#include "../incl/Model.h"

Model::Model(const Model &other) : Drawable(Model::sRenderer) {
    this->set(other);
}

Model::Model(SDL_Renderer* renderer) : Drawable(renderer) {}

void Model::set(const Model& other) {
    mComponents.clear();
    for (auto& comp : other.mComponents) {
        switch(comp->get_type()) {
            case TYPE_POINT:
                add_as<Point>(comp);
                break;
            case TYPE_LINE:
                add_as<Line>(comp);
                break;
        }
    }
}

void Model::add(const double x, const double y, const double z) {
    auto newPoint = std::make_shared<Point>(x, y, z);
#ifndef FAST_LOADING
    for (auto point : mPoints)
        if (*point == newPoint)
            return;
#endif
    mComponents.push_back(newPoint);
    mPoints.push_back(newPoint);
}

void Model::add(const std::shared_ptr<Line>& line) {
    this->add(line->get_start(), line->get_end());
}

void Model::add(std::shared_ptr<Point> p1, std::shared_ptr<Point> p2) {
    bool startSet = false, endSet = false;
#ifndef FAST_LOADING
    for (auto point : mPoints) {
        if (*point == p1) {
            p1 = point;
            startSet = true;
        }
        if (*point == p2) {
            p2 = point;
            endSet = true;
        }
        if (startSet && endSet)
            break;
    }
#endif
    if (!startSet)
        mPoints.push_back(p1);
    if (!endSet)
        mPoints.push_back(p2);
    mComponents.push_back(std::make_shared<Line>(p1, p2));
}

void Model::draw() const {
    calculate_distances();
    for (auto& comp : mComponents)
        comp->draw();
}

void Model::move(const Coordinate coord, const double dist) {
    for (auto& point : mPoints)
        point->move(coord, dist);
    Point::release();
}

void Model::turn(const Coordinate Coordinate, const double angle) {
    for (auto& point : mPoints)
        point->turn(Coordinate, angle);
}

void Model::calculate_distances() const {
    std::list<double> distances;
    for (auto& comp : mComponents)
        distances.push_back(comp->get_distance());
    Component::sRangeMin = *std::min_element(distances.begin(), distances.end());
    Component::sRangeMax = *std::max_element(distances.begin(), distances.end());
    Component::sRange = Component::sRangeMax - Component::sRangeMin;
}
