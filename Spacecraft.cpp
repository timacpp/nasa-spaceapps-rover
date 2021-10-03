#include "Spacecraft.h"
#include <SFML/Window/Keyboard.hpp>

#define sign(x) x > 0 - x < 0

Spacecraft::Spacecraft() : GameObject(960.0f, 540.0f, "images/spacecraft/spacecraft.png") {
	this->setScale(imageScale, imageScale);
}

void Spacecraft::processInput() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        velocity += speedStep * direction;
	} else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		velocity -= speedStep * direction;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		rotate(-rotationStep);
        sf::Transform transform;
        transform.rotate(-rotationStep);
        direction = transform.transformPoint(direction);
	} else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		rotate(rotationStep);
        sf::Transform transform;
        transform.rotate(rotationStep);
        direction = transform.transformPoint(direction);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        velocity.x += speedStep * sign(velocity.x);
        velocity.y += speedStep * sign(velocity.y);
	}
}

void Spacecraft::update() {
    this->processInput();
	this->move(velocity);
}
