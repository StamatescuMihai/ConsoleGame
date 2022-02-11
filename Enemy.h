#pragma once

#include <cmath>

#define INF 2000000010
class Enemy {
private:
	double x, y, hp, speed = 1;
	const int width = 6, height = 6;
public:

	Enemy() {
		x = 50;
		y = 50;
		hp = 3;
	}

	void Update(Player& player, Map& map, int& enemyCount, int pathMap[150][200], double deltaTime) {
		for (auto it = player.bullets.begin(); it != player.bullets.end();) {
			if (CollisionWithBullet(it->GetX(), it->Gety())) {
				it = player.bullets.erase(it);
				hp--;
			}
			else {
				it++;
			}
		}
		if (hp == 0) {
			Respawn(map, player);
			enemyCount++;
		}
		int dj[] = { 0, 0, -1, 1, -1, -1, 1, 1 };
		int di[] = { 1, -1, 0, 0, 1, -1, -1, 1 };
		int minDist = INF;
		double xVector = 0, yVector = 0;
		double alpha = 0;
		for (int d = 0; d < 8; d++) {
			int iVec = round(y) + di[d];
			int jVec = round(x) + dj[d];
			if (pathMap[iVec][jVec] < minDist) {
				minDist = pathMap[iVec][jVec];
				xVector = jVec - x;
				yVector = iVec - y;
			}
		}
		x += (xVector * speed) * deltaTime;
		y += (yVector * speed) * deltaTime;

	}

	void Draw(Graphics& gfx) {

		for (int i = 0; i < 6; i++) {
			if (i < hp * 2) {
				gfx.DrawPixel(x + i, y - 2, RED);
			}
		}

		gfx.DrawPixel(x + 0, y + 0, DARK_RED);
		gfx.DrawPixel(x + 1, y + 0, DARK_RED);
		gfx.DrawPixel(x + 2, y + 0, DARK_GREEN);
		gfx.DrawPixel(x + 3, y + 0, DARK_GREEN);
		gfx.DrawPixel(x + 4, y + 0, DARK_GREEN);
		gfx.DrawPixel(x + 5, y + 0, DARK_RED);

		gfx.DrawPixel(x + 0, y + 1, DARK_GREEN);
		gfx.DrawPixel(x + 1, y + 1, DARK_YELLOW);
		gfx.DrawPixel(x + 2, y + 1, DARK_YELLOW);
		gfx.DrawPixel(x + 3, y + 1, DARK_YELLOW);
		gfx.DrawPixel(x + 4, y + 1, DARK_YELLOW);
		gfx.DrawPixel(x + 5, y + 1, DARK_GREEN);

		gfx.DrawPixel(x + 0, y + 2, DARK_GREEN);
		gfx.DrawPixel(x + 1, y + 2, BLACK);
		gfx.DrawPixel(x + 2, y + 2, DARK_YELLOW);
		gfx.DrawPixel(x + 3, y + 2, DARK_YELLOW);
		gfx.DrawPixel(x + 4, y + 2, BLACK);
		gfx.DrawPixel(x + 5, y + 2, DARK_GREEN);

		//gfx.DrawPixel(x + 0, y + 3, GREEN);
		gfx.DrawPixel(x + 1, y + 3, DARK_YELLOW);
		gfx.DrawPixel(x + 2, y + 3, DARK_YELLOW);
		gfx.DrawPixel(x + 3, y + 3, DARK_YELLOW);
		gfx.DrawPixel(x + 4, y + 3, DARK_YELLOW);
		//gfx.DrawPixel(x + 5, y + 3, GREEN);

		gfx.DrawPixel(x + 0, y + 4, DARK_RED);
		gfx.DrawPixel(x + 1, y + 4, DARK_YELLOW);
		gfx.DrawPixel(x + 2, y + 4, DARK_BLUE);
		gfx.DrawPixel(x + 3, y + 4, DARK_BLUE);
		gfx.DrawPixel(x + 4, y + 4, DARK_YELLOW);
		gfx.DrawPixel(x + 5, y + 4, DARK_GREEN);

		gfx.DrawPixel(x + 0, y + 5, DARK_GREEN);
		gfx.DrawPixel(x + 1, y + 5, DARK_GREEN);
		gfx.DrawPixel(x + 2, y + 5, DARK_GREEN);
		gfx.DrawPixel(x + 3, y + 5, DARK_GREEN);
		gfx.DrawPixel(x + 4, y + 5, DARK_RED);
		gfx.DrawPixel(x + 5, y + 5, DARK_RED);
	}

	void Respawn(Map& map, Player& player) {
		do {
			x = rand() % 189 + 5;
			y = rand() % 139 + 5;
		} while (Collides(map) || player.DistanceFrom(x, y) <= 20);
		hp = 3;
	}
	bool CollidesWithPlayer(Player& player) {
		return !(x + width<player.getX() || y + height <player.getY() || x>player.getX() + player.getWidth() || y>player.getY() + player.getHeight());
	}

private:
	bool CollisionWithBullet(double xB, double yB) {
		return xB >= x && xB <= x + width && yB >= y && yB <= y + height;
	}
	bool Collides(Map& map) {
		return map.Get(x, y) != ' '
			|| map.Get(x + width - 1, y) != ' '
			|| map.Get(x, y + height - 1) != ' '
			|| map.Get(x + width - 1, y + height - 1) != ' ';
	}
	bool Collides(int x, int y, Map& map) {
		return map.Get(x, y) != ' '
			|| map.Get(x + width - 1, y) != ' '
			|| map.Get(x, y + height - 1) != ' '
			|| map.Get(x + width - 1, y + height - 1) != ' ';
	}
};