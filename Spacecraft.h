#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include "GameObject.h"

class Spacecraft : public GameObject {
public: 
	Spacecraft();

	void update() override;

private:
    const float speedStep    = 0.1f;
    const float rotationStep = 1.f;
    const float imageScale   = 0.1f;
    const sf::Vector2f maxVelocity {10.f, 10.f};

    sf::Vector2f velocity {0.f, 0.f};
    sf::Vector2f direction{0.f, -1.f};

    void processInput();
};


#endif // SPACECRAFT_H
