#pragma once
#include "Graphics.h"
#include "Player.h"
#include "Map.h"
#include <chrono>

class Game {
private:
	Graphics gfx;
	Player player;
	Map map;
	chrono::time_point<chrono::system_clock> lastTime;
	chrono::duration<double> deltaTimeChrono;
	double deltaTime;
public:
	Game() {
		gfx.ConstructConsole(200, 150, 5, 5);
		lastTime = chrono::system_clock::now();
	}

	void Update() {
		deltaTimeChrono = chrono::system_clock::now() - lastTime;
		deltaTime = deltaTimeChrono.count() * 10;
		player.Update(deltaTime, map);
		lastTime = chrono::system_clock::now();
	}

	void Graphics() {
		map.Draw(gfx);
		player.Draw(gfx);
		gfx.Update();
	}

};