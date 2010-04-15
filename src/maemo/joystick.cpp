#include "joystick.h"

int fake_joy0button=0, fake_joy1button=0;
unsigned int fake_joy0dir=0, fake_joy1dir=0;

void fake_joysticks(SDLKey sym, int down)
{
	/* Mouse is plugged to port 0, so joy usually ocupies port 1 */
	switch (sym) {
		case SDLK_SPACE:
			if (down) {
				fake_joy1button |= (int)1;
			}
			else {
				fake_joy1button &= ~((int)1);
			}
			break;

		case SDLK_s:
		case SDLK_DOWN:
			if (down) {
				fake_joy1dir |= (unsigned int)1;
			}
			else {
				fake_joy1dir &= ~((unsigned int)1);
			}
			break;
		case SDLK_d:
		case SDLK_RIGHT:
			if (down) {
				fake_joy1dir |= (unsigned int)1<<1;
			}
			else {
				fake_joy1dir &= ~((unsigned int)1<<1);
			}
			break;
		case SDLK_w:
		case SDLK_UP:
			if (down) {
				fake_joy1dir |= (unsigned int)1<<8;
			}
			else {
				fake_joy1dir &= ~((unsigned int)1<<8);
			}
			break;
		case SDLK_a:
		case SDLK_LEFT:
			if (down) {
				fake_joy1dir |= (unsigned int)1<<9;
			}
			else {
				fake_joy1dir &= ~((unsigned int)1<<9);
			}
			break;
	}
}
