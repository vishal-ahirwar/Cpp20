
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <map>
#include <set>
#include<unordered_map>
#include<unordered_set>

struct DateOfBirth
{
    int day{};
    int month{};
    int year{};
};

class User
{
    DateOfBirth date_of_birth{};
    std::string user_name{};

public:
    explicit User(const DateOfBirth &date_of_birth, const std::string &user_name)
    {
        this->date_of_birth = date_of_birth;
        this->user_name = user_name;
    };
    User(DateOfBirth &&date_of_birth, std::string &&user_name)
    {
        this->date_of_birth = std::move(date_of_birth);
        this->user_name = std::move(user_name);
    };

    friend std::ostream &operator<<(std::ostream &out, const User &right)
    {
        out << "date of birth : " << right.date_of_birth.day << "." << right.date_of_birth.month << "." << right.date_of_birth.year << "\nDisplay Name: " << right.user_name << "\n";
        return out;
    };

    friend bool operator<(const User &left, const User &right)
    {
        if (left.date_of_birth.year > right.date_of_birth.year)
        {
            return true;
        }
        else if (left.date_of_birth.year == right.date_of_birth.year)
        {
            if (left.date_of_birth.month > right.date_of_birth.month)
            {
                return true;
            }
            else if (left.date_of_birth.month == right.date_of_birth.month)
            {
                if (left.date_of_birth.day > right.date_of_birth.day)
                {
                    return true;
                }
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    };
};

using user = std::pair<std::string, User>;

template <class T>
void print(const T &data)
{
    for (const auto &v : data)
    {
        std::cout << "\nuser name : " << v.first << "\n"
                  << v.second << "\n----------\n";
    };
    std::cout << "\n";
};
template<class T>
void registerNewUser(T&dataset)
{
    std::cout << "please enter user name : ";
    std::string user_name{};
    std::getline(std::cin, user_name);
    auto result = dataset.find(user_name);
    if (result != dataset.end())
    {
        std::cout << "[error]User already registered with that user name!\n";
        return;
    };
    std::cout << "Enter date of birth  [day month year]: ";
    int day{}, month{}, year{};
    std::cin >> day >> month >> year;
    std::cin.clear();
    std::cin.ignore();
    std::cout << "Enter display name : ";
    std::string display_name{};
    std::getline(std::cin, display_name);
    dataset.emplace(user{user_name, User(DateOfBirth{day, month, year}, display_name)}).second ? std::cout << "User has been registered with us, Thank You choosing us!\n" : std::cout << "failed to register new user, unknown error pls try again!\n";
}
int main(int argc, char *argv[])
{
    std::map<std::string, User> dataset;
    do
    {
        registerNewUser(dataset);
        std::cout << "would you like add another user??[y/n]";
        if (getchar() == 'n')
            break;
        std::cin.clear();
        std::cin.ignore();
    } while (true);

    print(dataset);
    return 0;
};
