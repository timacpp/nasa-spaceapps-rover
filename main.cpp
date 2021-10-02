#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window/VideoMode.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Rover", sf::Style::Fullscreen);
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    sf::Texture background;
    background.loadFromFile("space.jpg");
    sf::Sprite backgroundSprite(background);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(backgroundSprite);
        window.draw(shape);
        window.display();
    }

    return 0;
}