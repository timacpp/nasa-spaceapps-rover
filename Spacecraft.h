#ifndef SPACE_CRAFT
#include "GameObject.h"

class Spacecraft : public GameObject {
public: 
	Spacecraft(float x, float y);

	void processInput();

	void update() override;

private:
    sf::Vector2f velocity = {0, 0};
};


#endif // SPACE_CRAFT
