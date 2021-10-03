#include "GameObject.h"

GameObject::GameObject(float x, float y,
                       const std::string &filename) : sf::Sprite() {
    this->setPosition(x, y);
    this->loadTexture(filename);
    this->setOrigin(getSize() * 0.5f);
}

void GameObject::loadTexture(const std::string &filename) {
    auto texture = new sf::Texture();
    if (texture->loadFromFile(filename)) {
        this->setTexture(*texture);
    } else {
        throw std::runtime_error("Failed to load image: " + filename);
    }
}

sf::Vector2f GameObject::getSize() {
    const sf::Vector2u& size = this->getTexture()->getSize();
    const sf::Vector2f& scale = this->getScale();
    return {(float) size.x * scale.x, (float)size.y * scale.y};
}