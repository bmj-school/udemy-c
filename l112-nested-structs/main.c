#include <stdio.h>

int main()
{
    struct time
    {
        int hours;
        int minutes;
        int seconds;
    };
    struct date
    {
        int day;
        int month;
        int year;
    };
    struct dateTime
    {
        struct date sdate;
        struct time stime;
    };

    struct dateTime event;
    struct dateTime event2 = { {2,1,2015}, {3,30,0} };
    printf("%d-%d-%d %d:%d:%d", event2.sdate.day, event2.sdate.month, event2.sdate.year,
    event2.stime.hours, event2.stime.minutes, event2.stime.seconds);

    // Or, a struct inside a struct definition;
    struct Time
    {
        struct Date
        {
            int day;
            int month;
            int year;
        } dob;

        int hour;
        int minutes;
        int seconds;
    };
}