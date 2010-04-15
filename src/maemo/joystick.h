#include <SDL.h>

extern int fake_joy0button, fake_joy1button;
extern unsigned int fake_joy0dir, fake_joy1dir;

void fake_joysticks(SDLKey sym, int down);
