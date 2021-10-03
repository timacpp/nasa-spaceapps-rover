#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window/VideoMode.hpp>
#include "Spacecraft.h"

int main() {
    sf::RenderWindow window({1920, 1080}, "Rover", sf::Style::Fullscreen);
    sf::Texture background;
    background.loadFromFile("images/space/space.png");
    sf::Sprite backgroundSprite(background);
    window.setFramerateLimit(60);
    window.setVerticalSyncEnabled(true);
    Spacecraft spacecraft(960.0f, 540.0f);
    sf::View view = sf::View(sf::FloatRect(0, 0, 1920.0f, 1080.0f));;
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
            window.close();
        }
        view.setCenter(spacecraft.getPosition());
        window.clear();
        window.setView(view);
        window.draw(backgroundSprite);
        window.draw(spacecraft);
        window.display();
        spacecraft.processInput();
        spacecraft.update();
    }

    return 0;
}