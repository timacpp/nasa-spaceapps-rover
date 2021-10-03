#include "GameTile.h"

GameTile::GameTile(float x, float y) : GameObject(x, y, "images/space/space.png") {
	setScale(2.0f, 2.0f);
};

void GameTile::update() {};
