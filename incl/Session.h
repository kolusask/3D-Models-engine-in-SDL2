//
// Created by askar on 10.09.19.
//

#pragma once

#include <array>
#include <SDL2/SDL.h>

#include "constants.h"
#include "FileReader.h"
#include "Model.h"

class Session {
public:
    explicit Session(const char* fileName = "../Models/cube.3de") ;
    ~Session();

    void run();

private:
    void init_graphics();
    void quit_graphics();
    void refresh();

    SDL_Window* mWindow{};
    SDL_Renderer* mRenderer{};
    std::shared_ptr<Model> mModel;
    std::shared_ptr<Model> mStartModel;

};
