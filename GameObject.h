#pragma once

#include <SFML/Graphics.hpp>

class GameObject : public sf::Sprite {
public:
    GameObject(float x, float y, const std::string& filename);
    virtual void Update() = 0;
private:
    sf::Texture* texture = new sf::Texture;
    void loadTexture(const std::string& filename);
};