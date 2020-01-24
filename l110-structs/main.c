#include <stdio.h>

int main()
{
    struct date
    {
        int day;
        int mon;
        int year;
    };
    struct date today;
    today.day = 16;
    today.mon = 01;
    today.year = 2020;

    struct date birthday = {17, 05, 1965};
    struct date anniversary = {.day = 17, .mon=05, 1965};
    struct date another;
    another = (struct date) {01, 12, 2019};

    printf("%i %i %i", today.day, today.mon, today.year);
    printf("%i %i %i", today.day, today.mon, today.year);
}