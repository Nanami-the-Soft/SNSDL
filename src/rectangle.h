#pragma once

#include "SDL2/SDL.h"


namespace snsdl
{

class Renderer;


class Rectangle
{
private:
    SDL_Rect actual_rect;
public:
    Rectangle(int, int, int, int);
public:
    int get_x();
    void set_x(int);
    int get_y();
    void set_y(int);
    int get_width();
    void set_width(int);
    int get_height();
    void set_height(int);
public:
    friend Renderer;
};

}
