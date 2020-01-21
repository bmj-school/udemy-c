#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num = 10;
    int * pnum = &num;

    printf("Address of pointer: %p\n", &pnum);
    printf("Value of pointer: %p\n", pnum);
    printf("Value of what pointer is pointing to: %d\n", *pnum);

    return 0;
}