#if !defined(_OVAL_)
#define _OVAL_
#include "shape.h"
class Oval : public Shape
{
private:
    int xRadius {};
    int yRaduis{};

public:
    Oval(const std::string &, const int &, const int &);
    int GetArea()const override;
    ~Oval();
};

#endif