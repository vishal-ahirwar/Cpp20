
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
    void print() const { std::cout << "[" << str << ", " << data << "]\n"; };
    StringAndDouble operator+(const StringAndDouble &obj);

    void operator++()
    {
        ++this->data;
    }

    StringAndDouble operator++(int)
    {
        auto temp=*this;
        this->data+=1;
        return temp;
    }
};
//operator overloading
StringAndDouble StringAndDouble::operator+(const StringAndDouble &obj)
{
    return StringAndDouble{this->str + obj.str, this->data + obj.data};
}
int main(int argc, char *argv[])
{
    StringAndDouble string{" example string "};
    StringAndDouble string2{" example string 2 "};
    StringAndDouble double1{"", 23.45};
    //using addition overloaded operator here
    StringAndDouble double2 = string + double1+string2;
    double2=double2+double2;
    double2.print();
    ++double2;
    double2.print();
    auto temp=double2++;
    temp.print();
    double2.print();
    return 0;
};
