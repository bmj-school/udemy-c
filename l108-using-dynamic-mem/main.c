#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[20];
    char *str;
    scanf("Enter:", &input);
    // str = (char *) malloc(15 * sizeof(char));
    // strcpy(str, "hello");
    // printf("String = %s, Address = %p  %p\n", str, str, &str);

    // str = (char *) realloc(str, 25*sizeof(char));
    // strcat(str, ".com");
    // printf("String = %s, Address = %p  %p\n ", str, str, &str);

    // free(str);

    return 0;
}