#include "cylinder.h"
#include <math.h>
float Cylinder::getVolume() const
{
    return PI * baseRadius * baseRadius * height;
};
float Cylinder::setBaseRadius(const float &value)
{
    baseRadius = value;
};
float Cylinder::setHeight(const float &value)
{
    height = value;
};

float Cylinder::getBaseRadius() const
{
    return baseRadius;
};
float Cylinder::getHeight() const
{
    return height;
};