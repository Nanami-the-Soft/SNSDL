#pragma once

#include "SDL2/SDL.h"


namespace snsdl
{

class Renderer;


class Window
{
private:
    SDL_Window * actual_window;
public:
    Window(const std::string &, int, int, Uint32);
    Window(const Window &) = delete;
    Window(Window &&) = delete;
    Window operator=(const Window &) = delete;
    Window operator=(Window &&) = delete;
    ~Window();
public:
    friend Renderer;
};

}
