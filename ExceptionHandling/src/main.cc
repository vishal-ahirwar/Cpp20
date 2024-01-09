
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <exception>
class Message :public std::exception
{
private:
    const char* str;
protected:
    const char* getStr()const { return this->str; };
public:
    Message(const char* msg) :str(msg) {};
    const char* what()const noexcept;
};
class Warning :public Message
{
public:
    Warning(const char* msg) :Message(msg) {};
    const char* what()const noexcept;
};
class Error :public Message
{
public:
    Error(const char* msg) :Message(msg) {};
    const char* what()const noexcept;
};
void throwException(int n)
{
    switch (n)
    {
    case 1:
        throw Message("don't worry this is just a message!\n");
    case 2:
        throw Warning("found a warning you can fix it if you want!\n");
    case 3:
        throw Error("critical error found can't proceed further before fixing these errors!\n");
    case 4:
        throw -1;
    default:
        throw std::exception("unknown exception occured!\n");
    };
};

int main(int argc, char *argv[])
{
    for (int i = 0; i < 5; ++i)
    {
        try {
            throwException(i);
        }
        catch (Warning& warning)
        {
            std::cout << warning.what();
        }
        catch (Error& error)
        {
            std::cout << error.what();
        }
        catch (Message& msg)
        {
            std::cout << msg.what();
        }
        catch (std::exception& ex)
        {
            std::cout << ex.what();
        }
        catch (...)
        {
            std::cout << "It shouldn't happen!\n";
        }
    };
    puts("END");
    return 0;
};

const char* Message::what()const noexcept
{
    return this->str;
};
const char* Warning::what()const noexcept
{
    return this->getStr();
};
const char* Error::what()const noexcept
{
    return this->getStr();
};
