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

    fprintf(fp, "A float: %0.2f!", 1.4499);
    fclose(fp);

    return 0;
}