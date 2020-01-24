#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Family
{
    char name[20];
    int age;
    char father[20];
    char mother[20];
};

bool siblings(struct Family member1, struct Family member2)
{
    if (strcmp(member1.mother, member2.mother) == 0)
        return true;
    else
        return false;
}

bool siblingsWithPointers(struct Family *pmember1, struct Family *pmember2)
{
    if (strcmp(pmember1->mother, pmember2->mother) == 0)
        return true;
    else
        return false;
}

bool SafeSiblingsWithPointers(const struct Family *pmember1, const struct Family *pmember2)
{
    if (strcmp(pmember1->mother, pmember2->mother) == 0)
        return true;
    else
        return false;
}

struct Date my_fun(void); // This function would return a struct

#define FUNDLEN 20



struct funds
{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

/*
    This function will return the sum of two values in the struct
*/
double sum(struct funds moolah)
{
    return (moolah.bankfund + moolah.savefund);
}



int main()
{
}