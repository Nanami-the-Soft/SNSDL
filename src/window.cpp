#include "error.h"
#include "window.h"


namespace snsdl
{

Window::Window(const std::string & title, int width, int height, Uint32 flags) :
    actual_window{nullptr}
{
    actual_window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED,
     SDL_WINDOWPOS_UNDEFINED, width, height, flags);
    if (actual_window == nullptr) throw ExceptionFromSdl{};
};


Window::~Window()
{
    if (actual_window != nullptr) SDL_DestroyWindow(actual_window);
};

}
