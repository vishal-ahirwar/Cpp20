//
// Created by soloknight on 1/15/24.
//
#include "User.h"
using quote_pair=std::pair<std::string,std::string>;
void User::addFavorateQuote(const std::pair<std::string, std::string> &new_quote) {
    save_quotes.emplace(new_quote);
};
bool User::deleteQuote(const std::pair<std::string, std::string> &quote) {
    auto it=save_quotes.find(quote.first);
    if(it!=save_quotes.end())
    {
        save_quotes.erase(it);
        return true;
    }else
    {
        return  false;
    };
};
const std::map<std::string,std::string>& User::getSavedQuotes()const
{
    return this->save_quotes;
};

const std::string& User::getUserName() const
{
    return this->user_name;
};

void User::setUserName(const std::string &user_name)
{
    this->user_name=user_name;
};

void initQuotes()
{
    std::cout<<"Enter your name : ";
    std::string  user_name{};
    std::getline(std::cin,user_name);
    User new_user{user_name};
    bool b_should_continue{false};
    do {
        std::string author{},quote{};
        std::cout<<"Enter Author Name : ";
        std::getline(std::cin,author);
        std::cout<<"Enter Quote : ";
        std::getline(std::cin,quote);
        new_user.addFavorateQuote(quote_pair(author,quote));
        std::cout<<"Would you like to add more quote[y/n]??";
        if(getchar()=='y')b_should_continue=true;
        else b_should_continue=false;
        std::cin.clear();
        std::cin.ignore();

    }while(b_should_continue);
    std::cout<<new_user.getUserName()<<": \n\n";
    printContainer(new_user.getSavedQuotes());
};

