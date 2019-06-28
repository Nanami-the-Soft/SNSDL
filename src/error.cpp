#include "SDL2/SDL.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_mixer.h"
#include "error.h"


namespace snsdl
{

Exception::Exception(const char * message) :
    std::runtime_error{message}
{
};


ExceptionFromSdl::ExceptionFromSdl() :
    Exception{SDL_GetError()}
{
};


ExceptionFromSdlTtf::ExceptionFromSdlTtf() :
    Exception{TTF_GetError()}
{
};


ExceptionFromSdlMixer::ExceptionFromSdlMixer() :
    Exception{Mix_GetError()}
{
};

}
