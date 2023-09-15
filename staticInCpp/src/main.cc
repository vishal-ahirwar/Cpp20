
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
class TestClass
{
private:
    int data{};
    static int count;

public:
    TestClass(const int &data);
    ~TestClass();
    static int getCount()
    {
        return TestClass::count;
    };
    static void print(const TestClass&test);
    const static double PI;
};
int TestClass::count{};
const double TestClass::PI{3.14};
TestClass::TestClass(const int &data) : data(data) { ++count; }
void TestClass::print(const TestClass&test)
{
    std::cout<<test.data<<"\n";
};

TestClass::~TestClass()
{
    --count;
}

class Point
{
private:
    /* data */
    Point *ptr;
    float x, y;

public:
    Point(float x = 0, float y = 0) : ptr(nullptr), x(x), y(y){};
    ~Point()
    {
        delete ptr;
    };
    void setOriginPointPtr()
    {
        this->ptr = new Point{12.4, 4.6};
    }
    void printPointPtr()
    {
        if (!ptr)
        {
            std::cout << "Ptr is not set yet!\n";
            return;
        }
        else
        {
            std::cout << ptr->x << ", " << ptr->y << "\n";
        }
    }
};

int main(int argc, char *argv[])
{

    const TestClass test{45};
    TestClass::print(test);
    std::cout << TestClass::getCount() << "\n";
    Point ptrPoint{};
    ptrPoint.printPointPtr();
    ptrPoint.setOriginPointPtr();
    ptrPoint.printPointPtr();
    return 0;
};
