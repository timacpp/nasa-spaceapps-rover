#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include "GameObject.h"

class Spacecraft : public GameObject {
public:
    Spacecraft();

	Spacecraft(float x, float y);

	void update() override;

private:
    const float speedDelta = 0.1f;
    const float speedLimit = 10.0f;
    const float angleDelta = 1.f;

    void processInput();
};

#endif // SPACECRAFT_H
