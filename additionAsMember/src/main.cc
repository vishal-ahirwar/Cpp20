
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <cassert>
#include <string.h>

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
    auto operator[](const int index);
    std::ostream &operator>>(std::ostream &out);
    StringAndDouble(const StringAndDouble &obj);
    friend std::istream &operator>>(std::istream &in, StringAndDouble &ob);
};

inline std::istream &operator>>(std::istream &in, StringAndDouble &ob)
{

    std::cout << "str:>>";
    std::getline(in, ob.str);
    std::cout << "double:>>";
    in >> ob.data;
    in.clear();
    in.ignore();
};

inline std::ostream &operator<<(std::ostream &out, const StringAndDouble &ob)
{
    out << ob.getString() << " " << ob.getDouble();
    return out;
}
std::ostream &StringAndDouble::operator>>(std::ostream &out)
{
    out << this->str << " " << this->data;
    return out;
};

StringAndDouble::StringAndDouble(const StringAndDouble &obj)
{
    this->str = obj.str;
    this->data = obj.data;
};
auto StringAndDouble::operator[](const int index)
{
    assert(index >= 0 && index <= 1);
    if (index == 0)
    {
        StringAndDouble temp{this->str};
        return temp;
    }
    else
    {
        StringAndDouble temp{"", data};
        return temp;
    };
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

    // helloWorld >> std::cout << std::endl;

    helloWorld = helloWorld[0] - hello[1] - space[1];

    // helloWorld >> std::cout << std::endl;

    // helloWorld[1] >> (helloWorld[0] >> std::cout) << std::endl;

    std::cout << helloWorld << std::endl;
    std::cin >> helloWorld>>space>>world;
    std::cout << helloWorld << std::endl<<space<<std::endl<<world<<std::endl;
    return 0;
};
