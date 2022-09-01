//
// Created by askar on 11.09.19.
//

#include "../incl/Component.h"

double Component::sRangeMin, Component::sRangeMax, Component::sRange;

uint8_t Component::brightness() const {
    double brightness = (mDistance - sRangeMin) / sRange;
    return uint8_t(64 + 191 * brightness);
}
