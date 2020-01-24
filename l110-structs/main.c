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

    printf("%i %i %i", today.day, today.mon, today.year);
}