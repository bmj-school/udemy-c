#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Employee
{
    char name[20];
    int hireDate;
    float salary;
};


int main()
{
    struct Employee one = {"Bill", 2020, 20.00};

    printf("New employee:");
    scanf("%s %i %f", one.name, &one.hireDate, &one.salary);

    printf("\n%s %i %f", one.name, one.hireDate, one.salary);
}