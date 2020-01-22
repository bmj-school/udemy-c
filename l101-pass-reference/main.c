#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x; // Save value
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 100, b = 200;
    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
}