#include "SpaceCraft.h"
#include <SFML/Window/Keyboard.hpp>

SpaceCraft::SpaceCraft(float x, float y) : GameObject(x, y, "images/spacecraft/spacecraft.png") {
	this->setScale(0.1f, 0.1f);
};

void SpaceCraft::ProcessInput() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && velocity.y >= -10) {
		velocity.y -= 0.1f;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && velocity.y <= 10) {
		velocity.y += 0.1f;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && velocity.x >= -10) {
		rotate(-2);
		velocity.x -= 0.1f;
	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D) && velocity.x <= 10)
	{
		rotate(2);
		velocity.x+= 0.1f;
	}
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
		if (velocity.x > 0) velocity.x -= 0.1f;
		else if (velocity.x < 0) velocity.x += 0.1f;

		if (velocity.y > 0) velocity.y -= 0.1f;
		else if (velocity.y < 0) velocity.y += 0.1f;
	}
}

void SpaceCraft::Update() {
	move(velocity);
}
