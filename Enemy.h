#pragma once

class Enemy {
private:
	double x, y, hp;
	const int width = 6, height = 6;
public:

	Enemy() {
		x = 50;
		y = 50;
		hp = 3;
	}

	void Update(Player& player, Map& map) {
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
			Respawn(map);
		}
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
private:
	bool CollisionWithBullet(double xB, double yB) {
		return xB >= x && xB <= x + width && yB >= y && yB <= y + height;
	}

	void Respawn(Map& map) {
		do {
			x = rand() % 189 + 5;
			y = rand() % 139 + 5;
		} while (Collides(map));
		hp = 3;
	}

	bool Collides(Map& map) {
		return map.Get(x, y) != ' '
			|| map.Get(x + width - 1, y) != ' '
			|| map.Get(x, y + height - 1) != ' '
			|| map.Get(x + width - 1, y + height - 1) != ' ';
	}
};