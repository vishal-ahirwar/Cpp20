
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
// interface
class StreamInsert
{
protected:
    virtual void FuncStreamInsert(std::ostream &out) = 0;

private:
    friend std::ostream &operator<<(std::ostream &out, StreamInsert &mgr);
};
class Point : public StreamInsert
{
private:
    int x{}, y{};

public:
    Point(const int &x, const int &y) : x{x}, y{y} {};

private:
    void FuncStreamInsert(std::ostream &out)
        override
    {
        out << "[" << this->x << ", " << this->y << "]";
    }
};

class Circle final : public StreamInsert
{
public:
    void FuncStreamInsert(std::ostream &out) override
    {
        out << "[circle struff!]";
    }
};

std::ostream &operator<<(std::ostream &out, StreamInsert &mgr)
{
    mgr.FuncStreamInsert(out);
    return out;
}
class A : public StreamInsert
{
public:
    virtual void PrintHistory() = 0;
    virtual void Fly() = 0;
    virtual void Landing() = 0;
    virtual void Break() = 0;

    virtual ~A() = default;
};

class Car final : public A
{
public:
    void PrintHistory() override{};
    void Fly() override{};
    void Landing() override{};
    void Break() override{};
    void FuncStreamInsert(std::ostream &out)
        override;
};
void Car::FuncStreamInsert(std::ostream &out)
{
    out << "[Car]";
};
int main(int argc, char *argv[])
{

    Point p1{5, 8};
    Circle c1;
    std::cout << p1 << std::endl
              << c1 << std::endl;

    A *yann{new Car};
    std::cout << *yann << std::endl;
    delete yann;
    return 0;
};
