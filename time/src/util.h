#if !defined(UTIL_H)
#define UTIL_H
#include <stdio.h>
#define SECONDS_IN_DAY 86400
#define SECONDS_IN_HOUR 3600
#define SECONDS_IN_MINUTE 60

typedef int NormalInteger;
 
void convertTime(struct Time *const time, int seconds)
{
    time->days = seconds / SECONDS_IN_DAY;
    seconds %= SECONDS_IN_DAY;

    time->hours = seconds / SECONDS_IN_HOUR;
    seconds %= SECONDS_IN_HOUR;

    time->minutes = seconds / SECONDS_IN_MINUTE;
    seconds %= SECONDS_IN_MINUTE;

    time->seconds = seconds;
}
void printTime(const struct Time *const time)
{
    printf("[days] : %d, [hours] : %d, [minutes] : %d, [seconds] : %d\n", time->days, time->hours, time->minutes, time->seconds);
};

#endif