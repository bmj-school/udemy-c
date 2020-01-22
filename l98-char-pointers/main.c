#include <string.h>
#include <stdio.h>


void copyStringArray(char to[], char from[])
{
    int i;
    for (i=0; from[i]!='\0'; ++i)
        to[i] = from[i];
    to[i] = '\0';
}

void copyStringPtr(char *to, char *from)
{
    for ( ; *from!='\0', ++from; ++to)
        *to = *from;
    *to='\0';
}

void copyStringPtrWhile(char *to, char *from)
{
    while (*from) // Will break on the Null
        *to++ = *from++;
    *to = '\0';
}

int main()
{
    char str1[] = "A 0 string to be copied";
    char str2[50];

    copyStringPtrWhile(str2, str1);
    printf("%s\n%s\n", str1, str2);
    return 0;
}