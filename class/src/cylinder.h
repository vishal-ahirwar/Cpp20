#ifndef CYLINDER
#define CYLINDER
#include "constants.h"
class Cylinder
{
private:
    float baseRadius{}, height{};

public:
    Cylinder() = default;
    Cylinder(const float &r, const float &h) : baseRadius(r), height(h){};

public:
    float getVolume() const;
    float getBaseRadius() const;
    float getHeight() const;
    float setBaseRadius(const float &value);
    float setHeight(const float &value);
};

#endif