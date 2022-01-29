#include <iostream>
#include <Windows.h>
#include "Game.h"

using namespace std;

int main()
{
	Game game;
	while (true) {
		game.Update();
		game.Graphics();
	}
	return 0;
}
