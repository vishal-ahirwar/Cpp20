#if !defined(_CIRCLE_)
#define _CIRCLE_
#include "shape.h"
class Circle : public Shape
{
private:
    int radius{};

public:
    Circle(const std::string &, const int &);
    int GetArea() const override;
    int GetRadius()const;
    ~Circle();
};

#endif