
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <string.h>
#include "circle.h"
#include "oval.h"
#include "square.h"
#include "rectangle.h"
#include <memory>
int main(int argc, char *argv[])
{
    // Shape *ptr{new Circle("circle", 45)};
    // std::cout << ptr->GetArea() << std::endl;
    // Circle *circlePtr{dynamic_cast<Circle *>(ptr)};
    // std::cout << circlePtr->GetRadius() << "\n";

    std::shared_ptr<Shape> shape{};

    // shape = std::make_shared<Circle>("Circle 1 from main", 45);
    // int area = shape->GetArea();
    // printf("area of circle : %d\n", area);

    // shape = std::make_shared<Square>("Square kinda", 48);
    // area = shape->GetArea();
    // printf("area of Square : %d\n", area);

    // shape = std::make_shared<Rectangle>("rect kinda", 48, 23);
    // area = shape->GetArea();
    // printf("area of Rectangle : %d\n", area);

    // shape = std::make_shared<Oval>("Oval kinda", 48, 90);
    // area = shape->GetArea();
    // printf("area of Oval : %d\n...sizeof shape : %d...\n", area,sizeof(*shape));

    // shape = std::make_shared<Circle>("Circle", 15);
    // std::cout << shape->GetArea() << std::endl;
    // auto tempCircle = std::dynamic_pointer_cast<Circle>(shape);
    // if (tempCircle)
    // {
    //     std::cout << tempCircle->GetRadius() << std::endl;
    // }
    return 0;
};
