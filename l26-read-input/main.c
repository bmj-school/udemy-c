#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a value, then a string:");
    scanf("%d %s", &i, str);

    printf("\nEntered: %d   %s\n",i, str);
    return 0;
}