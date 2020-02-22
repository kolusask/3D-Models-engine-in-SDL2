//
// Created by askar on 10.09.19.
//

#ifndef ENGINE3D_DRAWABLE_H
#define ENGINE3D_DRAWABLE_H

#include <SDL2/SDL.h>

enum Coordinate { COORD_X, COORD_Y, COORD_Z };

class Drawable {
public:
    virtual void draw() const = 0;

protected:
    explicit Drawable(SDL_Renderer* renderer = nullptr);
    static SDL_Renderer* sRenderer;
};


#endif //ENGINE3D_DRAWABLE_H
