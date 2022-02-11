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
	Enemy enemies[100];
	chrono::time_point<chrono::system_clock> lastTime;
	chrono::duration<double> deltaTimeChrono;
	int pathMap[150][200];
	int updateFrame = 0;
	double deltaTime;
public:
	int enemyCount;
	Game(){
		enemyCount = 3;
		gfx.ConstructConsole(200, 150, 5, 5);
		lastTime = chrono::system_clock::now();
		srand(time(NULL));
		for (int i = 0; i < enemyCount; i++) {
			enemies[i].Respawn(map, player);
		}
	}

	void Update() {
		deltaTimeChrono = chrono::system_clock::now() - lastTime;
		deltaTime = deltaTimeChrono.count() * 10;
		player.Update(deltaTime, map);
		if(!updateFrame)
			player.GeneratePathMap(map, pathMap);
		int lastEnemyCount = enemyCount;
		for (int i = 0; i < lastEnemyCount; i++) {
			enemies[i].Update(player, map, enemyCount, pathMap, deltaTime);
			if (enemies[i].CollidesWithPlayer(player)) {
				Restart();
			}
		}
		for (int i = lastEnemyCount; i <= enemyCount; i++) {
			enemies[i].Respawn(map, player);
		}
		updateFrame++;
		updateFrame %= 5;
		lastTime = chrono::system_clock::now();
	}

	void Graphics() {
		map.Draw(gfx);
		for (int i = 0; i < enemyCount; i++) {
			enemies[i].Draw(gfx);
		}
		player.Draw(gfx);
		gfx.Update();
	}

	void Restart() {
		enemyCount = 3;
		player.Reset();
		for (int i = 0; i < enemyCount; i++) {
			enemies[i].Respawn(map, player);
		}
	}
};