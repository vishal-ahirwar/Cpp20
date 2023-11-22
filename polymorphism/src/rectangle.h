#if !defined(_RECT_)
#define _RECT_
#include "shape.h"
class Rectangle : public Shape
{
private:
    int height{};
    int width{};

public:
    Rectangle(const std::string &, const int &, const int &);
    int GetArea()const override;
    int GetWidth()const;
    int GetHeight()const;
    ~Rectangle();
};

#endif