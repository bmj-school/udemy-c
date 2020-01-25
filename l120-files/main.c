#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <stdbool.h>


int main()
{
    FILE *fp = NULL;
    int c;

    fp = fopen("file.txt", "r");

    if (fp == NULL)
    {
        perror("Error opening file");
        return(-1);
    }

    while((c=fgetc(fp)) != EOF)
        printf("Char:%c\n", c);
    fclose(fp);
    fp = NULL;
    // rewind(fp);
    printf("%p\n",&fp);

    FILE *fp2 = NULL;
    char str[60];

    fp2 = fopen("file.txt", "r");

    if (fp2 == NULL)
    {
        perror("Error opening file");
        return(-1);
    }

    if (fgets(str,60, fp2)!=NULL)
    {
        printf("STRING: %s\n", str);
    }

    fclose(fp2);
    return 0;
}