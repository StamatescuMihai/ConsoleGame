#pragma once

#include "Graphics.h"
#include "Map.h"
#include <cmath>
#include <vector>
#include <chrono>
#include <list>
#include <queue>

#define PI 3.141592
#define INF 2000000010

class Player {
private:
	class Bullet {
	private:
		double x;
		double y;
		double angle;
		const double speed = 2;
	public:
		Bullet(double x, double y, double angle) {
			this->x = x;
			this->y = y;
			this->angle = angle;
		}
		void Update() {
			x += cos(angle) * speed;
			y += sin(angle) * speed;
		}
		void Draw(Graphics& gfx) {
			gfx.DrawPixel(x, y, BLACK);
		}
		bool Collides(Map& map) {
			return map.Get(x, y) == 'R';
		}
		double GetX() {
			return x;
		}
		double Gety() {
			return y;
		}
	};
private:
	double x, y, angle;
	double crosshairX, crosshairY;
	double radius = 8;
	const double angleSpeed = 0.3;
	const int width = 6;
	const int height = 6;
	const double speed = 1.5;
	chrono::time_point<chrono::system_clock> lastBullet;
	chrono::duration<double> lastBulletDuration;
	double bulletDuration;
public:
	list<Bullet> bullets;
public:
	Player() {
		x = 60;
		y = 60;
		angle = PI / 2;
	}
	void Update(double deltaTime, Map& map) {
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

		if (GetKeyState(VK_RIGHT) & 0x8000) {
			angle += angleSpeed * deltaTime;
		}
		if (GetKeyState(VK_LEFT) & 0x8000) {
			angle -= angleSpeed * deltaTime;
		}

		NormalizeAngle(angle);

		crosshairX = x + (width / 2) + (cos(angle) * radius);
		crosshairY = y + (height / 2) + (sin(angle) * radius);

		lastBulletDuration = chrono::system_clock::now() - lastBullet;
		bulletDuration = lastBulletDuration.count();

		if ((GetKeyState(VK_SPACE) & 0x8000) && bulletDuration > 0.75) {
			lastBullet = chrono::system_clock::now();
			Bullet b(x + width / 2, y + height / 2, angle);
			bullets.emplace_back(b);
		}

		for (auto it = bullets.begin(); it != bullets.end();) {
			it->Update();
			if (it->Collides(map)) {
				it = bullets.erase(it);
			}
			else {
				it++;
			}
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

	void Draw(Graphics& gfx) {
		if (x < 0) {
			x = 0;
		}
		if (y < 0) {
			y = 0;
		}
		if (x + width - 1 > gfx.getScreenWidth() - 1) {
			x = gfx.getScreenWidth() - width;
		}
		if (y + height - 1 > gfx.getScreenHeight() - 1) {
			y = gfx.getScreenHeight() - height;
		}

		for (auto it = bullets.begin(); it != bullets.end(); it++) {
			it->Draw(gfx);
		}

		gfx.DrawPixel(crosshairX, crosshairY, WHITE);

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
		gfx.DrawPixel(x + 5, y + 2, DARK_GREEN);

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

	void GeneratePathMap(Map& map, int pathMap[150][200]) {
		bool viz[150][200];
		for (int i = 0; i < 150; i++) {
			for (int j = 0; j < 200; j++) {
				pathMap[i][j] = INF;
				viz[i][j] = false;
			}
		}
		queue<pair<int, int> > q;
		int dj[] = { 0, 0, -1, 1, -1, -1, 1, 1 };
		int di[] = { 1, -1, 0, 0, 1, -1, -1, 1 };
		q.push(make_pair((int)y, (int)x));
		pathMap[(int)y][(int)x] = 0;
		viz[(int)y][(int)x] = true;
		while (!q.empty()) {
			int iCrt = q.front().first;
			int jCrt = q.front().second;
			q.pop();
			for (int d = 0; d < 8; d++) {
				int iVec = iCrt + di[d];
				int jVec = jCrt + dj[d];
				if (iVec > 0 && jVec > 0 && iVec < 150 && jVec < 200 && !Collides(jVec, iVec, map) && !viz[iVec][jVec]) {
					q.push(make_pair(iVec, jVec));
					pathMap[iVec][jVec] = pathMap[iCrt][jCrt] + 1;
					viz[iVec][jVec] = true;
				}
			}
		}
	}

	bool Collides(int x, int y, Map& map) {
		return map.Get(x, y) != ' '
			|| map.Get(x + width - 1, y) != ' '
			|| map.Get(x, y + height - 1) != ' '
			|| map.Get(x + width - 1, y + height - 1) != ' ';
	}

	void NormalizeAngle(double& angle) {
		if (angle >= 2 * PI) {
			angle -= 2 * PI;
		}
		else {
			if (angle < 0) {
				angle += 2 * PI;
			}
		}
	}

	double DistanceFrom(int _x, int _y) {
		return sqrt((x - _x) * (x - _x) + (y - _y) * (y - _y));
	}

	void Reset() {
		x = 60;
		y = 60;
		angle = PI / 2;
		bullets.clear();
	}

	double getX() {
		return x;
	}

	double getY() {
		return y;
	}

	double getWidth() {
		return width;
	}

	double getHeight() {
		return height;
	}
};