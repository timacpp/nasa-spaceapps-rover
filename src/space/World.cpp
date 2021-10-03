#include "World.h"

World::World() {
	float y = -3240;
	float x = -5750.0f;
	for (int i = 0; i < 49; i++) {
		GameTile tile(x, y);
		gameWorld.push_back(tile);
		if ((i+1) % 7) {
			x += 1920;
		}
		else {
			x = -5750.0f;
			y += 1080;
		}
	}
}

std::vector<GameTile>& World::getVector() {
	return gameWorld;
}