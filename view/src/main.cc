
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!

#define msg(str) std::cout << str << std::endl;
#include <vector>
#include <iostream>
#include<algorithm>
#include<ranges>
#include "Poco/Timer.h"
// #include "Poco/Thread.h"
#include "Poco/Stopwatch.h"

#include<Poco/Net/HTTPRequest.h>
#include<Poco/URI.h>
#include<Poco/Net/HTTPClientSession.h>
#include<Poco/Net/HTTPResponse.h>
#include<Poco/StreamCopier.h>

int someRandomFunctions(int argc, char *argv[])
{

    std::vector<int> arr{45, 34, 23, 12, 1};
    auto print = [](auto view)
    {for(auto v:view){std::cout<<v<<", ";}std::cout<<std::endl; };
    auto odd = [](const auto &i)
    { return i % 2 != 0; };
    std::ranges::take_view first_three_elements = std::ranges::take_view(arr, 3);
    std::ranges::take_while_view first_odd_elements = std::ranges::take_while_view(arr, odd);
    std::ranges::drop_view drop_first_2_elements = std::ranges::drop_view(arr, 2);
    msg("printing original data : ")
        print(arr);
    msg("taking first three elements")
        print(first_three_elements);
    msg("taking while there is no even numbers")
        print(first_odd_elements);
    msg("dropping first 2 elements")
        print(drop_first_2_elements);

    std::vector<std::pair<int, std::string>> users{{1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}};
    auto keys = std::views::keys(users);
    auto values = std::views::values(users);
    msg("Printing keys : ")
        print(keys);
    msg("Printing values : ")
        print(values);

    // TODO : failter based on ages using views
    return 0;
};

/*
 * Main application
 */

class PocoTimer
{
public:
    //------------
    PocoTimer() { stopWatch.start(); }
    //------------
    void PrintElapsedTime(Poco::Timer &timer)
    {
        std::cout << "Time elapsed: " << stopWatch.elapsed() / 1000 << " milliseconds." << std::endl;
    }

    void stopTimer();
private:
    Poco::Stopwatch stopWatch;
};
void PocoTimer::stopTimer()
{
    this->stopWatch.stop();
};

int main(int argc,char*argv[])
{
    if(argc<2)return []()->int{std::cout<<"please provide url for get request.\n";return 1;}();
    try{


        Poco::URI url(argv[1]);
        Poco::Net::HTTPResponse res{};
        Poco::Net::HTTPClientSession session{url.getHost(),url.getPort()};


        if(url.empty())return -1;

        Poco::Net::HTTPRequest req{Poco::Net::HTTPRequest::HTTP_GET,url.getPathAndQuery(),Poco::Net::HTTPMessage::HTTP_1_1};
        req.setContentType("application/x-www-form-urlencoded\r\n");
        session.sendRequest(req);


        std::cout<<res.getStatus()<<" "<<res.getReason()<<std::endl;
        auto &in=session.receiveResponse(res);

        Poco::StreamCopier::copyStream(in,std::cout);
        std::cout<<std::endl;

    }catch(std::exception&e)
    {
        std::cout<<"something went wrong !\n"<<e.what()<<"\n";
    };

}
