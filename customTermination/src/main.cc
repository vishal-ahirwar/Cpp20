
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
// #include<cstdlib>
#include <thread>
#include <chrono>
class Animal
{
public:
    std::string type_name;
    Animal() = default;
    ~Animal() = default;
    virtual void speek()
    {
        printf("No defination!\n");
    }
};
class Dog : public Animal
{
private:
    void bark() { printf("dog is barking!\n"); };
public:
    void speek()override { bark(); };
    Dog() = default;
    ~Dog() = default;
};

class TestException
{
public:
    TestException() = default;
    ~TestException()noexcept(false)
    {
        try
        {
            throw 1;
        }
        catch (...)
        {
            throw 7;
        }
    }
};
void onUnhandledErrorOccured();
void tryToRun() noexcept(false)
{
    try
    {
        throw 5;
    }
    catch (...)
    {
        printf("confirmed!\n");
        throw 6;
    }
};

int main(int argc, char *argv[])
{
    std::set_terminate(&onUnhandledErrorOccured);
    try
    {
       /*  tryToRun();*/
  /*      {
            TestException ex;
        }*/
        Animal an;
        Dog dg;
        dg.type_name = "dog";
        an.type_name = "an";
        Animal *animal = &an;
        animal->type_name = "animal";
        
        animal = &an;
        animal->speek();
        animal = &dg;
        Dog dog{dynamic_cast<Dog&>(*animal)};
        dog.speek();
        
        printf("name : %s\n", dog.type_name.c_str());
    }
    catch (std::exception&e)
    {
        printf("what : %s!\n",e.what());
    }
    catch (...)
    {
        printf("unknown error!\n");
    }
    int a{}, b{};
    printf("Enter a>");
    std::cin >> a;
    printf("Enter b>");
    std::cin >> b;

    if (b <= 0)
        throw "division by zero!";

    printf("a/b : %d\n", a / b);

    return 0;
};
void onUnhandledErrorOccured()
{
    std::cout << "Unknown unhandled exception occored in program\n";
     std::this_thread::sleep_for(std::chrono::seconds(1));
     for (int i = 10; i > 0; --i)
     {
         printf("Program will auto terminate in %ds \r", i);
         std::this_thread::sleep_for(std::chrono::seconds(1));
     }
     std::exit(0);
};
