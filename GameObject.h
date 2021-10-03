#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <SFML/Graphics.hpp>

class GameObject : public sf::Sprite {
public:
    GameObject(float x, float y, const std::string& filename);

    virtual void update() = 0;

protected:
    sf::Vector2f getSize();

private:
    void loadTexture(const std::string& filename);
};

#endif // GAMEOBJECT_H