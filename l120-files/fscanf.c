#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <stdbool.h>

int main()
{
    FILE *fp = NULL;
    char s1[10], s2[10], s3[10];
    int year;

    fp = fopen("file-scan.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        return (-1);
    }

    if (fp !=NULL)
        fputs("Hello test!\n", fp);
    rewind(fp);

    fscanf(fp, "%s %s %s %d", s1, s2, s3, &year);

    printf("%s %s %s %d", s1, s2, s3, year);
    fclose(fp);
    return 0;
}