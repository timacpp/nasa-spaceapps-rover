#ifndef WORLD_H
#define WORLD_H

#include "../object/GameTile.h"
#include <vector>

class World {
	std::vector<GameTile> gameWorld;
public:
	World();
	std::vector<GameTile>& getVector();
};
#endif // WORLD_H
