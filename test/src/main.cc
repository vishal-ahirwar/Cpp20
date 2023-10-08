
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
class Point
{
private:
    int x{}, y{};

public:
    Point(const int &x, const int &y) : x{x}, y{y} {};
    Point(const Point &p)
    {
        puts("copy constructor called!");
        this->x = p.x;
        this->y = p.y;
    };
    Point(const Point &&p)
    {
        puts("move constructor called!");
        this->x = p.x;
        this->y = p.y;
    }
    Point operator+(const Point &right)
    {
        Point temp{this->x + right.x, this->y + right.y};
        return temp;
    };
    Point operator-(const Point &right)
    {
        Point temp{this->x - right.x, this->y - right.y};
        return temp;
    };
    friend std::ostream &operator<<(std::ostream &left, const Point &right);
};
inline std::ostream &operator<<(std::ostream &left, const Point &right)
{
    left << right.x << " " << right.y;
    return left;
};
int main(int argc, char *argv[])
{
    Point p1{23, 56};
    Point p2{p1 + Point{45, 78}};
    std::cout << p1 << std::endl << p2 << std::endl;
    return 0;
};
