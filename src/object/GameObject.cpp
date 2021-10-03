#include "GameObject.h"

GameObject::GameObject(float x, float y,
                       const std::string& filename,
                       float scale) : sf::Sprite() {
    this->setPosition(x, y);
    this->loadTexture(filename);
    this->setOrigin(getSize() * 0.5f);
    this->setScale(scale, scale);
}

void GameObject::loadTexture(const std::string& filename) {
    auto texture = new sf::Texture();
    if (texture->loadFromFile(filename)) {
        this->setTexture(*texture);
    } else {
        throw std::runtime_error("Failed to load image: " + filename);
    }
}

// TODO: Save memory with better rotation
void GameObject::rotateBy(float angle) {
    sf::Sprite::rotate(angle);
    sf::Transform rotator;
    rotator.rotate(angle);
    direction = rotator.transformPoint(direction);
}

void GameObject::accelerate(const sf::Vector2f& delta) {
    this->velocity += delta;
}

void GameObject::setCollidable(bool isCollidable) {
    this->collidable = isCollidable;
}

sf::Vector2f GameObject::getSize() {
    const auto& size{this->getTexture()->getSize()};
    const auto& scale{this->getScale()};
    return {(float) size.x * scale.x,(float) size.y * scale.y};
}