#ifndef GAME_TILE
#define GAME_TILE

#include "GameObject.h"

class GameTile : public GameObject {
public:
	GameTile(float x, float y);
	void update() override;
};
#endif // !GAME_TILE
