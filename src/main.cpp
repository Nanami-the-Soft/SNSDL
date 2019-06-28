#include <cstdlib>
#include "SDL2/SDL.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_mixer.h"
#include "error.h"
#include "window.h"


int main()
{
    using namespace snsdl;
    using std::atexit;

    try {
        if (SDL_Init(SDL_INIT_EVERYTHING) != 0) throw ExceptionFromSdl{};
        atexit(SDL_Quit);
        if (TTF_Init() != 0) throw ExceptionFromSdlTtf{};
        atexit(TTF_Quit);
        int mix_flags = MIX_INIT_FLAC | MIX_INIT_MOD | MIX_INIT_MP3 |
         MIX_INIT_OGG;
        if (Mix_Init(mix_flags) != mix_flags) throw ExceptionFromSdlMixer{};
        atexit(Mix_Quit);
    } catch (const Exception & error) {
        return 1;
    };

    Window window{"SNSDL test", 640, 480, 0};
    SDL_Delay(3000);

    return 0;
};
