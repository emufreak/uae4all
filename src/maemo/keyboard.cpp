#include <SDL.h>

#include "../include/keyboard.h"

int decode_maemo (SDL_keysym *prKeySym)
{
    if (!(prKeySym->mod & KMOD_MODE)) return -1;

    if (prKeySym->mod & KMOD_LSHIFT){
    switch(prKeySym->sym)
    {
    case SDLK_p: return AK_NP0;
    case SDLK_q: return AK_NP1;
    case SDLK_w: return AK_NP2;
    case SDLK_e: return AK_NP3;
    case SDLK_r: return AK_NP4;
    case SDLK_t: return AK_NP5;
    case SDLK_y: return AK_NP6;
    case SDLK_u: return AK_NP7;
    case SDLK_i: return AK_NP8;
    case SDLK_o: return AK_NP9;
    case SDLK_v: return AK_NPDIV;
    case SDLK_a: return AK_NPMUL;
    case SDLK_f: return AK_NPSUB;
    case SDLK_s: return AK_NPADD;
    case SDLK_PERIOD: return AK_NPDEL;
    case SDLK_KP_ENTER: return AK_ENT;
    }
    }

    if (prKeySym->mod & KMOD_LCTRL){
    switch(prKeySym->sym)
    {
    case SDLK_q: return AK_F1;
    case SDLK_w: return AK_F2;
    case SDLK_e: return AK_F3;
    case SDLK_r: return AK_F4;
    case SDLK_t: return AK_F5;
    case SDLK_y: return AK_F6;
    case SDLK_u: return AK_F7;
    case SDLK_i: return AK_F8;
    case SDLK_o: return AK_F9;
    case SDLK_p: return AK_F10;
    }
    }

    switch(prKeySym->sym)
    {
    case SDLK_p: return AK_0;
    case SDLK_q: return AK_1;
    case SDLK_w: return AK_2;
    case SDLK_e: return AK_3;
    case SDLK_r: return AK_4;
    case SDLK_t: return AK_5;
    case SDLK_y: return AK_6;
    case SDLK_u: return AK_7;
    case SDLK_i: return AK_8;
    case SDLK_o: return AK_9;

    default: return -1;
    }
}
