#ifndef WORLD
#define WORLD

#include "GameObject.h"
#include <vector>

class World {
	std::vector<GameObject> gameWorld;
public:
	World();
};
#endif // !WORLD
