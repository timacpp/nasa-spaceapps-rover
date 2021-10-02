#include "GameObject.h"

GameObject::GameObject(float x, float y, const std::string &filename): sf::Sprite() {
    this->setPosition(x, y);
    this->loadTexture(filename);
}

void GameObject::loadTexture(const std::string &filename) {
    if (texture->loadFromFile(filename)) {
        this->setTexture(*texture, true);
    } else {
        throw std::runtime_error("Failed to load image: " + filename);
    }
}

//const sf::Sprite& GameObject::getObject() {
  //  return this->;/
//}