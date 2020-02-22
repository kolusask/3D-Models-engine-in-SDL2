//
// Created by askar on 11.09.19.
//

#include "../incl/Line.h"

Line::Line(const Line& other) : mStart(other.mStart), mEnd(other.mEnd) {}

Line::Line(std::shared_ptr<Point> &p1, std::shared_ptr<Point> &p2) : mStart(p1), mEnd(p2) {}

Line::Line(const double p1x, const double p1y, const double p1z, const double p2x, const double p2y,
           const double p2z) :
            mStart(std::make_shared<Point>(p1x, p1y, p1z)),
            mEnd(std::make_shared<Point>(p2x, p2y, p2z)) {}

ComponentType Line::get_type() const { return TYPE_LINE; }

double Line::get_distance() const {
    return mDistance = (mStart->get_distance() + mEnd->get_distance()) / 2;
}

void Line::draw() const {
    auto brightness = static_cast<uint8_t>(calculate_brightness() / 3 + 0x2B);
    SDL_SetRenderDrawColor(sRenderer, brightness, brightness, brightness, brightness);
    SDL_RenderDrawLine(sRenderer, mStart->get_plane_x(), mStart->get_plane_y(), mEnd->get_plane_x(),
            mEnd->get_plane_y());
}

bool Line::operator==(const std::shared_ptr<Point>& other) const {
    return mStart == other || mEnd == other;
}

std::shared_ptr<Point> Line::get_start() {
    return mStart;
}

std::shared_ptr<Point> Line::get_end() {
    return mEnd;
}
