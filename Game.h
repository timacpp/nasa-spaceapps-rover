#ifndef GAME
#define GAME

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <vector>
#include "Spacecraft.h"
#include "GameObject.h"

class Game {
public:
	Game();
	~Game();
	void start();
private:
	sf::RenderWindow* window; 
	sf::Texture background;
	sf::Sprite* backgroundSprite;
	sf::View* view;
	Spacecraft spacecraft;
	std::vector<GameObject> gameObjects;

	void processInput();
	void update();
	void draw();
	void initializeWindow();
};
#endif // !GAME
