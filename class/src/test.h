#ifndef __TEST__
#define __TEST__

class Test
{
private:
    int data{};
    char id{};
    int c;
    /* data */
public:
    Test(/* args */);
    Test *setData(const int &data);
    int getData()const;
    ~Test();
};

#endif