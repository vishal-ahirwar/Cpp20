#if !defined(_SHAPE_)
#define _SHAPE_
#include<string>
class Shape
{
private:
    std::string description{};

public:
    Shape(const std::string &);
    virtual int GetArea()const=0;
    virtual ~Shape();
};
#endif