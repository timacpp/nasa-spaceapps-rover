#ifndef WORLD
#define WORLD

#include "GameTile.h"
#include <vector>

class World {
	std::vector<GameTile> gameWorld;
public:
	World();
	std::vector<GameTile>& getVector();
};
#endif // !WORLD
