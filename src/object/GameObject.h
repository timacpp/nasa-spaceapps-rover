#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <SFML/Graphics.hpp>

class GameObject : public sf::Sprite {
public:
    GameObject(float x, float y,
               const std::string& filename,
               float scale = 1.f);

    virtual void update() = 0;

protected:
    sf::Vector2f velocity {0.f, 0.f};
    sf::Vector2f direction{0.f, -1.f};

    sf::Vector2f getSize();

    void rotateBy(float angle);

    void accelerate(const sf::Vector2f& delta);

    void setCollidable(bool isCollidable);

private:
    bool collidable = true;

    void loadTexture(const std::string& filename);
};

#endif // GAMEOBJECT_H