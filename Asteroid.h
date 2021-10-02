#pragma once

#include <SFML/Graphics.hpp>
#include "GameObject.h"

class Asteroid : protected GameObject {
public:
    Asteroid(float x, float y) : GameObject(x, y, "asteroid.png") {}

};