//
// Created by askar on 10.09.19.
//

#include "../incl/Session.h"

Session::Session(const char* fileName)  {
    init_graphics();
    mModel = std::make_shared<Model>(mRenderer);
    FileReader fileReader(fileName, mModel);
    mStartModel = std::make_shared<Model>(*mModel);
}

Session::~Session() {
    quit_graphics();
}

void Session::run() {
    SDL_ShowWindow(mWindow);
    SDL_Event event;
    while(true) {
        refresh();
        SDL_WaitEvent(&event);
        switch(event.type) {
            case SDL_QUIT:
                return;
            case SDL_KEYDOWN:
                switch(event.key.keysym.sym) {
                    // rotate
                    case SDLK_w: mModel->rotate(COORD_X, ROT_ANGLE);
                    break;
                    case SDLK_s: mModel->rotate(COORD_X, -ROT_ANGLE);
                    break;
                    case SDLK_d: mModel->rotate(COORD_Z, ROT_ANGLE);
                    break;
                    case SDLK_a: mModel->rotate(COORD_Z, -ROT_ANGLE);
                    break;
                    case SDLK_q: mModel->rotate(COORD_Y, ROT_ANGLE);
                    break;
                    case SDLK_e: mModel->rotate(COORD_Y, -ROT_ANGLE);
                    break;

                    // Move
                    case SDLK_k: mModel->move(COORD_Z, MOVE_DIST);
                    break;
                    case SDLK_i: mModel->move(COORD_Z, -MOVE_DIST);
                    break;
                    case SDLK_j: mModel->move(COORD_X, -MOVE_DIST);
                    break;
                    case SDLK_l: mModel->move(COORD_X, MOVE_DIST);
                    break;
                    case SDLK_u: mModel->move(COORD_Y, MOVE_DIST);
                    break;
                    case SDLK_o: mModel->move(COORD_Y, -MOVE_DIST);
                    break;

                    // Controls
                    case SDLK_ESCAPE:
                        return;
                    case SDLK_SPACE: mModel->set(*mStartModel);
                        break;
                    default:
                        break;
                }
            default:
                break;
        }
    }
}

void Session::init_graphics() {
    SDL_Init(SDL_INIT_VIDEO);
    mWindow = SDL_CreateWindow("E3D", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT,
                              SDL_WINDOW_HIDDEN);
    mRenderer = SDL_CreateRenderer(mWindow, -1, 0);
}

void Session::quit_graphics() {
    SDL_DestroyRenderer(mRenderer);
    SDL_DestroyWindow(mWindow);
    SDL_Quit();
}

void Session::refresh() {
    SDL_SetRenderDrawColor(mRenderer, 0x00, 0x00, 0x00, 0x00);
    SDL_RenderClear(mRenderer);
    mModel->render();
    SDL_RenderPresent(mRenderer);
}
