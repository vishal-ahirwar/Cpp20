#if !defined(_SQUARE_)
#define _SQUARE_
#include "shape.h"
class Square : public Shape
{
private:
    int len{};

public:
    Square(const std::string &, const int &);
    int GetArea()const override;
    int GetLen()const;
    ~Square();
};

#endif