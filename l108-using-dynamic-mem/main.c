#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // char input[20];
    int numBytes;
    char *str = NULL;
    // char str[100];
    // int i;

    printf("Enter number of characters for memory:");
    scanf("%i", &numBytes);

    printf("\nEnter %d characters:", numBytes);

    str = (char *)malloc(numBytes * sizeof(char));

    if (str)
    {
        scanf("%s", str);
        printf("Your string:%s with %d characters", str, (int)strlen(str));
    }
    // strcpy(str, "hello");
    // printf("String = %s, Address = %p  %p\n", str, str, &str);

    // str = (char *) realloc(str, 25*sizeof(char));
    // strcat(str, ".com");
    // printf("String = %s, Address = %p  %p\n ", str, str, &str);

    // free(str);

    return 0;
}