//
// Created by soloknight on 1/15/24.
//

#ifndef DEQUE_USER_H
#define DEQUE_USER_H
#include <string>
#include <map>
#include <iostream>
#include <utility>
class User
{
private:
    std::string user_name{};
    std::map<std::string,std::string>save_quotes{};
public:
    explicit User(std::string user_name):user_name{std::move(user_name)}{};
    void addFavorateQuote(const std::pair<std::string,std::string>&new_quote);
    bool deleteQuote(const std::pair<std::string,std::string>&quote);
    [[nodiscard]] const std::map<std::string,std::string>& getSavedQuotes()const;
    [[nodiscard]] const std::string&getUserName()const;
    void setUserName(const std::string&user_name);
};
template<class type>
void printContainer(const type&container)
{
    auto begin_it=container.begin();
    auto end_it=container.end();
    std::cout<<std::endl;
    while(begin_it!=end_it)
    {
        std::cout<<*begin_it<<", ";
        ++begin_it;
    };
    std::cout<<std::endl;
};
template<class type>
void printContainer(const std::map<type,type>&container)
{
    auto begin_it=container.begin();
    auto end_it=container.end();
    while(begin_it!=end_it)
    {
        std::cout<<"key: "<<begin_it->first<<", value: "<<begin_it->second<<std::endl;
        ++begin_it;
    };
}

void initQuotes();

#endif //DEQUE_USER_H
