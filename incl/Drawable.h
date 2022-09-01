//
// Created by askar on 10.09.19.
//

#pragma once

#include <SDL2/SDL.h>

enum Coordinate { COORD_X, COORD_Y, COORD_Z };

class Drawable {
public:
    virtual void render() const = 0;

protected:
    explicit Drawable(SDL_Renderer* renderer = nullptr);

    static SDL_Renderer* sRenderer;

};
