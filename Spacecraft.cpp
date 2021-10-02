#include "Spacecraft.h"
#include <SFML/Window/Keyboard.hpp>

Spacecraft::Spacecraft(float x, float y) : GameObject(x, y, "images/spacecraft/spacecraft.png") {
	this->setScale(0.1f, 0.1f);
};

void Spacecraft::processInput() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && velocity.y >= -10) {
		velocity.y -= 0.1f;
	} else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && velocity.y <= 10) {
		velocity.y += 0.1f;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		rotate(-2);
	} else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		rotate(2);
	}
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        velocity.x += 0.1f * (velocity.x > 0 ? -1 : 1);
        velocity.y += 0.1f * (velocity.y > 0 ? -1 : 1);
	}
}

void Spacecraft::update() {
	move(velocity);
}
