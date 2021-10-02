#pragma once

#include <SFML/Graphics.hpp>

class GameObject : private sf::Sprite {
public:
    GameObject(float x, float y, const std::string& filename);
private:
    void loadTexture(const std::string& filename);
};