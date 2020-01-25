#include <stdio.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("file.txt", "w+");

    if (fp == NULL)
    {
        perror("ERROR");
        return (-1);
    }

    fputs("WHAT IS HAPPENING?", fp);
    fseek(fp, 7, SEEK_SET);

    fputs("Hello 2!", fp);
    fclose(fp);
    return 0;
}