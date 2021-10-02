#ifndef SPACE_CRAFT
#include "GameObject.h"

class SpaceCraft : public GameObject {
	sf::Vector2f velocity = {0, 0};
public: 
	SpaceCraft(float x, float y);
	void ProcessInput();
	void Update() override;
};


#endif // !SPACE_CRAFT
