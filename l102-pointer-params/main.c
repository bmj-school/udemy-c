#include <stdio.h>
// #include <stdbool.h>

void square(int * const x)
{

    *x = *x * *x;
}

int main()
{
    int num = 2;
    square(&num);
    printf("Squared: %d\n", num);
    return 0;
}