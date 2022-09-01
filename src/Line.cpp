//
// Created by askar on 11.09.19.
//

#include "../incl/Line.h"

Line::Line(const Line& other):
    mEndpoint1(other.mEndpoint1),
    mEndpoint2(other.mEndpoint2) {}

Line::Line(std::shared_ptr<Point> &p1, std::shared_ptr<Point> &p2):
    mEndpoint1(p1),
    mEndpoint2(p2) {}

Line::Line(const double p1x, const double p1y, const double p1z,
           const double p2x, const double p2y, const double p2z) :
    mEndpoint1(std::make_shared<Point>(p1x, p1y, p1z)),
    mEndpoint2(std::make_shared<Point>(p2x, p2y, p2z)) {}

ComponentType Line::type() const { return TYPE_LINE; }

double Line::distance() const {
    return mDistance = (mEndpoint1->distance() + mEndpoint2->distance()) / 2;
}

void Line::draw() const {
    if (mEndpoint1->visible() || mEndpoint2->visible()) {
        auto brightness = static_cast<uint8_t>(this->brightness() / 3 + 0x2B);
        SDL_SetRenderDrawColor(sRenderer, brightness, brightness, brightness, brightness);
        SDL_RenderDrawLine(sRenderer,
                        mEndpoint1->plane_x(),
                        mEndpoint1->plane_y(),
                        mEndpoint2->plane_x(),
                        mEndpoint2->plane_y());
    }
}

bool Line::operator==(const std::shared_ptr<Point>& other) const {
    return mEndpoint1 == other || mEndpoint2 == other;
}

std::shared_ptr<Point> Line::endpoint_1() {
    return mEndpoint1;
}

std::shared_ptr<Point> Line::endpoint_2() {
    return mEndpoint2;
}
