//
// Created by askar on 10.09.19.
//

#include "../incl/Drawable.h"

SDL_Renderer* Drawable::sRenderer = nullptr;

Drawable::Drawable(SDL_Renderer* renderer) {
    if (!sRenderer && renderer)
        sRenderer = renderer;
}
