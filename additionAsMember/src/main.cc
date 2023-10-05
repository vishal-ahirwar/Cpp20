
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
class StringAndDouble
{
private:
    std::string str{};
    double data{};

public:
    StringAndDouble(const std::string &str = "", const double &data = 0.0) : str(str), data(data){};
    auto getString() const { return this->str; };
    auto getDouble() const { return this->data; };
    void print() const { std::cout << "[" << str << " " << data << "]\n"; };
    StringAndDouble operator+(const StringAndDouble &obj); // as a member
    void operator=(const StringAndDouble &obj);
    StringAndDouble operator-(const StringAndDouble &obj);
    StringAndDouble(const StringAndDouble &obj);
};
StringAndDouble::StringAndDouble(const StringAndDouble &obj)
{
    this->str = obj.str;
    this->data = obj.data;
};

StringAndDouble StringAndDouble::operator-(const StringAndDouble &obj)
{
    auto toFind = obj.getString();
    auto toReplace = this->str;
    auto index = toReplace.find(toFind);

    if (index != std::string::npos)
        toReplace.replace(index, toFind.length(), "");
    StringAndDouble temp{toReplace, this->data - obj.data};
    return temp;
};

void StringAndDouble::operator=(const StringAndDouble &obj)
{
    this->data = obj.data;
    this->str = obj.str;
}
// operator overloading
StringAndDouble StringAndDouble::operator+(const StringAndDouble &obj)
{
    return StringAndDouble{this->str + obj.str, this->data + obj.data};
}
StringAndDouble comma{","};
StringAndDouble space{" "};

int main(int argc, char *argv[])
{
    StringAndDouble hello{"hello", 5.5};
    StringAndDouble world{"world", 12.5};
    StringAndDouble helloWorld = hello + space + world;

    helloWorld.print();//[hello world 18]
    helloWorld = helloWorld - hello - space;
    helloWorld.print();//[world 12.5]

    return 0;
};
