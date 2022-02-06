#pragma once
#include "Graphics.h"
#include "Player.h"
#include "Map.h"
#include "Enemy.h"
#include <chrono>
#include <stdlib.h>
#include <time.h>

class Game {
private:
	Graphics gfx;
	Player player;
	Map map;
	Enemy enemies[20];
	chrono::time_point<chrono::system_clock> lastTime;
	chrono::duration<double> deltaTimeChrono;
	double deltaTime;
public:
	Game() {
		gfx.ConstructConsole(200, 150, 5, 5);
		lastTime = chrono::system_clock::now();
		srand(time(NULL));
	}

	void Update() {
		deltaTimeChrono = chrono::system_clock::now() - lastTime;
		deltaTime = deltaTimeChrono.count() * 10;
		player.Update(deltaTime, map);
		enemies[0].Update(player, map);
		lastTime = chrono::system_clock::now();
	}

	void Graphics() {
		map.Draw(gfx);
		player.Draw(gfx);
		enemies[0].Draw(gfx);
		gfx.Update();
	}

};