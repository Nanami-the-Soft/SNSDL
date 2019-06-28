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


void Renderer::clear()
{
     if (SDL_RenderClear(actual_renderer) != 0) throw ExceptionFromSdl{};
};


void Renderer::present()
{
    SDL_RenderPresent(actual_renderer);
};

}
