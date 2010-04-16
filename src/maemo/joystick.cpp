#include "joystick.h"

int fake_joy0button=0, fake_joy1button=0;
unsigned int fake_joy0dir=0, fake_joy1dir=0;

void fake_joysticks(SDLKey sym, int down)
{
    static int left = 0, right = 0, top = 0, bot = 0;
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
				bot = 1;
			}
			else {
				bot = 0;
			}
			break;
		case SDLK_d:
		case SDLK_RIGHT:
			if (down) {
				right = 1;
			}
			else {
				right = 0;
			}
			break;
		case SDLK_w:
		case SDLK_UP:
			if (down) {
				top = 1;
			}
			else {
				top = 0;
			}
			break;
		case SDLK_a:
		case SDLK_LEFT:
			if (down) {
				left = 1;
			}
			else {
				left = 0;
			}
			break;
	}
    if (left) top = !top;
    if (right) bot = !bot;
	/* Mouse is plugged to port 0, so joy usually ocupies port 1 */
    fake_joy1dir = bot | (right << 1) | (top << 8) | (left << 9);
}
