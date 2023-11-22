#if !defined (TIME)
#define TIME
typedef int NormalInteger;

struct Time
{
    NormalInteger days;
    NormalInteger hours;
    NormalInteger minutes;
    NormalInteger seconds;
};
#endif