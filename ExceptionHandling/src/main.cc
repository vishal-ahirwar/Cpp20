
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <exception>

void b();
void c();
void d();

void a()
{
    b();
};
void b()
{
    c();
};
void c()
{
    d();
};
void d()
{
    throw new int(-1);
};

int main(int argc, char *argv[])
{
    try
    {
        // a();
        try
        {
            throw "str";
        }
        catch (int n)
        {
            printf("%d", n);
        }
    }
    catch (const char *str)
    {
        printf("%s", str);
    }
    catch (int *e)
    {
        printf("%p : %d\n", e, *e);
        delete e;
    }
    std::cout << "\n[N]\n";
    return 0;
};
