#include <stdio.h>

int main()
{
    struct date
    {
        int day;
        int mon;
        int year;
    };

    struct month
    {
        int numberDays;
        char name[3];
    };

    struct date myDays[10]; // 10 dates

    myDays[0].day = 16;
    myDays[0].mon = 01;
    myDays[0].year = 2020;

    myDays[1] = (struct date) {01,12,2019};

    struct date myDays2[5] = {{1,2,1900}, {1,2,1900},{1,2,1900}};
    for (int i=0; i<10;++i)
        printf("%i %i %i\n", myDays[i].day, myDays[i].mon, myDays[i].year);

    struct month aMonth = {31, {'J','A','N'}};

}