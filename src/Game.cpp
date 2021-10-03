#include "Game.h"

Game::Game(unsigned width, unsigned height, unsigned framerate) :
        player(), world(),
        camera({0, 0, (float) width, (float) height}),
        window({width, height}, "Rover", sf::Style::Fullscreen) {
    window.setFramerateLimit(framerate);
    window.setVerticalSyncEnabled(true);
}

void Game::start() {
	while (window.isOpen()) {
		draw();
		update();
        handleEvents();
	}
}

void Game::handleEvents() {
	sf::Event event{};

	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed)
			window.close();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) 
		window.close();
}

void Game::update() {
	this->player.update();
	this->camera.setCenter(player.getPosition());
}

void Game::draw() {
	window.clear();
	window.setView(camera);
    for (auto& tile : world.getVector())
        window.draw(tile);
    window.draw(player);
	window.display();
}