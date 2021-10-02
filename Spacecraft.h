#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include "GameObject.h"

class Spacecraft : public GameObject {
public: 
	Spacecraft(float x, float y);

	void processInput();

	void update() override;

private:
    const float speedStep    = 0.10f;
    const float speedLimit   = 10.0f;
    const float rotationStep = 1.00f;
    const float imageScale   = 0.10f;

    sf::Vector2f velocity {0, 0};
    sf::Vector2f direction{0, -1.0f};
};


#endif // SPACECRAFT_H
