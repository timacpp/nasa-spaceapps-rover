#ifndef GAME_H
#define GAME_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <vector>
#include "object/Spacecraft.h"
#include "object/GameObject.h"
#include "space/World.h"

class Game {
public:
	explicit Game(unsigned width = 1920,
                  unsigned height = 1080,
                  unsigned framerate = 60);

	void start();

private:
    unsigned framerate;
    unsigned width, height;

    World world;
    Spacecraft player;
    std::vector<GameObject> objects;

    sf::View camera;
	sf::RenderWindow window;

	void handleEvents();

	void update();

	void draw();
};

#endif // GAME_H
