#pragma once
#include "Graphics.h"
#include <chrono>

class Game {
private:
	Graphics gfx;
	double x=0, y=0;
	chrono::time_point<chrono::system_clock> lastTime;
	chrono::duration<double> deltaTimeChrono;
	double deltaTime;
public:
	Game() {
		gfx.ConstructConsole(80, 60, 10, 10);
		x = gfx.getScreenWidth() / 2;
		y = gfx.getScreenHeight() / 2;
		lastTime = chrono::system_clock::now();
	}

	void Update() {
		deltaTimeChrono = chrono::system_clock::now() - lastTime;
		deltaTime = deltaTimeChrono.count() * 100000;
		if (GetKeyState('W') & 0x8000) {
			y -= 0.5 * deltaTime;
		}
		if (GetKeyState('A') & 0x8000) {
			x-= 0.5 * deltaTime;
		}
		if (GetKeyState('S') & 0x8000) {
			y+= 0.5 * deltaTime;
		}
		if (GetKeyState('D') & 0x8000) {
			x+= 0.5 * deltaTime;
		}
	}

	void Graphics() {
		gfx.ResetScreen();
		gfx.DrawPixel(x, y, MAGENTA);
		gfx.Update();
		lastTime = chrono::system_clock::now();
	}

};