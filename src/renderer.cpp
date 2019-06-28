#include "error.h"
#include "renderer.h"


namespace snsdl
{

Renderer::Renderer(const Window * window, Uint32 flags) :
    actual_renderer{nullptr}
{
    actual_renderer = SDL_CreateRenderer(window->actual_window, -1, flags);
    if (actual_renderer == nullptr) throw ExceptionFromSdl{};
};


Renderer::~Renderer()
{
    if (actual_renderer != nullptr) SDL_DestroyRenderer(actual_renderer);
};


Rectangle Renderer::get_viewport()
{
    Rectangle viewport{0, 0, 0, 0};
    SDL_RenderGetViewport(actual_renderer, &(viewport.actual_rect));
    return viewport;
};


void Renderer::set_viewport(const Rectangle * rectangle)
{
    if (SDL_RenderSetViewport(actual_renderer, &(rectangle->actual_rect)) != 0)
     throw ExceptionFromSdl{};
};


void Renderer::clear()
{
     if (SDL_RenderClear(actual_renderer) != 0) throw ExceptionFromSdl{};
};


void Renderer::present()
{
    SDL_RenderPresent(actual_renderer);
};

}
