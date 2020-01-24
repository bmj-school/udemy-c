#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date
{
    int day;
    int month;
    int year;
};

struct intPtrs
{
    int *p1;
    int *p2;
};

struct names
{
    char first[20];
    char last[20];
};

struct pnames
{
    char *first;
    char *last;
};

#define SLEN 20


struct namedct
{
    char *fname;
    char *lname;
    int letters;
};

void getinfo(struct namedct *pst)
{
    char temp[SLEN];
    printf("Enter first name:\n");
    gets_s(temp, SLEN);

    // Allocate mem
    pst->fname = (char *)malloc(strlen(temp + 1));

    // Copy name to allocated mem
    strcpy(pst->fname, temp);
    printf("Enter last name:\n");
    s_gets(temp, SLEN);

    // Allocate mem
    pst->lname = (char *)malloc(strlen(temp + 1));

    // Copy name to allocated mem
    strcpy(pst->lname, temp);
}

int main()
{
    struct date today, *datePtr;

    datePtr = &today;

    datePtr->day = 17;
    datePtr->month = 01;
    datePtr->year = 1926;

    printf("Date is: %i %i %i\n", datePtr->day, datePtr->month, datePtr->year);

    struct intPtrs pointers;
    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    printf("i1 = %i, *pointers.p1=%i\n", i1, *pointers.p1);

    struct names guy1 = {"John", "Doe"};
    struct pnames guy2 = {"Bric", "Dollingwood"};

    printf("%s and %s are together", guy1.first, guy2.first);
}