#pragma once

#include "SDL2/SDL.h"
#include "rectangle.h"
#include "window.h"

namespace snsdl
{

class Renderer
{
private:
    SDL_Renderer * actual_renderer;
public:
    Renderer(const Window *, Uint32);
    Renderer(const Renderer &) = delete;
    Renderer(Renderer &&) = delete;
    Renderer operator=(const Renderer &) = delete;
    Renderer operator=(Renderer &&) = delete;
    ~Renderer();
public:
    Rectangle get_viewport();
    void set_viewport(const Rectangle *);
public:
    void clear();
    void present();
};

}
