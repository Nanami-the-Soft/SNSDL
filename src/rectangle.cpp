#include "rectangle.h"


namespace snsdl
{

Rectangle::Rectangle(int x, int y, int width, int height) :
    actual_rect{x, y, width, height}
{
};


int Rectangle::get_x()
{
    return actual_rect.x;
};


void Rectangle::set_x(int value)
{
    actual_rect.x = value;
};


int Rectangle::get_y()
{
    return actual_rect.y;
};


void Rectangle::set_y(int value)
{
    actual_rect.y = value;
};


int Rectangle::get_width()
{
    return actual_rect.w;
};


void Rectangle::set_width(int value)
{
    actual_rect.w = value;
};


int Rectangle::get_height()
{
    return actual_rect.h;
};


void Rectangle::set_height(int value)
{
    actual_rect.h = value;
};

}
