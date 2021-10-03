#include "Spacecraft.h"
#include <SFML/Window/Keyboard.hpp>

#define sign(x) int(x > 0) - int(x < 0)

Spacecraft::Spacecraft() : Spacecraft(0.f, 0.f) {}

Spacecraft::Spacecraft(float x, float y) :
        GameObject(x, y,"images/spacecraft/spacecraft1.png", 0.1f) {}

void Spacecraft::processInput() {
    // TODO: speed limit
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        this->accelerate(speedDelta * direction);
	} else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		this->accelerate(-speedDelta * direction);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		this->rotateBy(-angleDelta);
	} else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		this->rotateBy(angleDelta);
	}

    // TODO: break
//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
//        velocity.x += speedStep * sign(velocity.x);
//        velocity.y += speedStep * sign(velocity.y);
//	}
}

void Spacecraft::update() {
    this->processInput();
	this->move(velocity);
}
