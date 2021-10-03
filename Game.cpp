#include "Game.h"

Game::Game(){
	initializeWindow();
	view = new sf::View(sf::FloatRect(0, 0, 1920.0f, 1080.0f));

	background.loadFromFile("images/space/space.png");
	backgroundSprite = new sf:: Sprite(background);
	backgroundSprite->setScale(0.5f, 0.5f);
}

Game::~Game() {
	delete window, view, background;
}

void Game::initializeWindow() {
	window = new sf::RenderWindow({ 1920, 1080 }, "Rover", sf::Style::Fullscreen);
	window->setFramerateLimit(60);
	window->setVerticalSyncEnabled(true);
}

void Game::start() {
	while (window->isOpen()) {
		draw();
		processInput();
		update();
	}
}

void Game::processInput() {
	sf::Event event;
	while (window->pollEvent(event)) {
		if (event.type == sf::Event::Closed)
			window->close();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) 
		window->close();
}

void Game::update() {
	spacecraft.update();
	view->setCenter(spacecraft.getPosition());
}

void Game::draw() {
	window->clear();
	window->setView(*view);
	window->draw(*backgroundSprite);
	window->draw(spacecraft);
	window->display();
}