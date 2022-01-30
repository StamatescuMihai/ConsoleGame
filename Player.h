#pragma once

#include "Graphics.h"
#include "Map.h"

class Player {
private:
	double x=10, y=10, angle = 3.14159;
	const int width = 6;
	const int height = 6;
	const double speed = 1.5;
public:
	void Update(double deltaTime, Map &map) {
		double lastY = y;
		double lastX = x;
		if (GetKeyState('W') & 0x8000) {
			y -= speed * deltaTime;
		}
		if (GetKeyState('A') & 0x8000) {
			x -= speed * deltaTime;
		}
		if (GetKeyState('S') & 0x8000) {
			y += speed * deltaTime;
		}
		if (GetKeyState('D') & 0x8000) {
			x += speed * deltaTime;
		}
		
		if (Collides(x, y, map)) {
			if (!Collides(lastX, y, map)) {
				x = lastX;
			}
			else if (!Collides(x, lastY, map)) {
					y = lastY;
				}
				else {
					x = lastX;
					y = lastY;
				}
		}

	}
	void Draw(Graphics &gfx) {
		if (x < 0) {
			x = 0;
		}
		if (y < 0) {
			y = 0;
		}
		if (x + width - 1 > gfx.getScreenWidth() - 1) {
			x = gfx.getScreenWidth() - width;
		}
		if (y + height -1 > gfx.getScreenHeight() - 1) {
			y = gfx.getScreenHeight() - height;
		}
		gfx.DrawPixel(x + 0, y + 0, DARK_RED);
		gfx.DrawPixel(x + 1, y + 0, DARK_RED);
		gfx.DrawPixel(x + 2, y + 0, DARK_GREEN);
		gfx.DrawPixel(x + 3, y + 0, DARK_GREEN);
		gfx.DrawPixel(x + 4, y + 0, DARK_GREEN);
		gfx.DrawPixel(x + 5, y + 0, DARK_RED);

		gfx.DrawPixel(x + 0, y + 1, DARK_GREEN);
		gfx.DrawPixel(x + 1, y + 1, WHITE);
		gfx.DrawPixel(x + 2, y + 1, WHITE);
		gfx.DrawPixel(x + 3, y + 1, WHITE);
		gfx.DrawPixel(x + 4, y + 1, WHITE);
		gfx.DrawPixel(x + 5, y + 1, DARK_GREEN);

		gfx.DrawPixel(x + 0, y + 2, DARK_GREEN);
		gfx.DrawPixel(x + 1, y + 2, BLACK);
		gfx.DrawPixel(x + 2, y + 2, WHITE);
		gfx.DrawPixel(x + 3, y + 2, WHITE);
		gfx.DrawPixel(x + 4, y + 2, BLACK);
		gfx.DrawPixel(x + 5, y + 2, DARK_RED);

		//gfx.DrawPixel(x + 0, y + 3, GREEN);
		gfx.DrawPixel(x + 1, y + 3, WHITE);
		gfx.DrawPixel(x + 2, y + 3, WHITE);
		gfx.DrawPixel(x + 3, y + 3, WHITE);
		gfx.DrawPixel(x + 4, y + 3, WHITE);
		//gfx.DrawPixel(x + 5, y + 3, GREEN);

		gfx.DrawPixel(x + 0, y + 4, DARK_RED);
		gfx.DrawPixel(x + 1, y + 4, WHITE);
		gfx.DrawPixel(x + 2, y + 4, RED);
		gfx.DrawPixel(x + 3, y + 4, RED);
		gfx.DrawPixel(x + 4, y + 4, WHITE);
		gfx.DrawPixel(x + 5, y + 4, DARK_GREEN);

		gfx.DrawPixel(x + 0, y + 5, DARK_GREEN);
		gfx.DrawPixel(x + 1, y + 5, DARK_GREEN);
		gfx.DrawPixel(x + 2, y + 5, DARK_GREEN);
		gfx.DrawPixel(x + 3, y + 5, DARK_GREEN);
		gfx.DrawPixel(x + 4, y + 5, DARK_RED);
		gfx.DrawPixel(x + 5, y + 5, DARK_RED);
	}

	bool Collides(int x, int y, Map &map) {
		return map.Get(x, y) != ' '
			|| map.Get(x + width - 1, y) != ' ' 
			|| map.Get(x, y + height - 1) != ' ' 
			|| map.Get(x + width - 1, y + height - 1) != ' ';
	}
};