#include "GameObject.h"

GameObject::GameObject(float x, float y,
                       const std::string &filename) : sf::Sprite() {
    this->setPosition(x, y);
    this->loadTexture(filename);
}

void GameObject::loadTexture(const std::string &filename) {
    auto texture = new sf::Texture();
    if (texture->loadFromFile(filename)) {
        this->setTexture(*texture);
    } else {
        throw std::runtime_error("Failed to load image: " + filename);
    }
}