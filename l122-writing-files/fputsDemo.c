#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <stdbool.h>


int main()
{
    FILE *fp = NULL;

    fp = fopen("file.txt", "w+");

    if (fp == NULL)
    {
        perror("Error opening file");
        return(-1);
    }

    fputs("String 1!", fp);
    fputs("String 2!", fp);
    fclose(fp);

    return 0;
}