#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    int len;

    fp = fopen("file.txt", "r");

    if (fp == NULL)
    {
        perror("ERROR");
        return (-1);
    }

    fseek(fp, 0, SEEK_END);

    len = ftell(fp);
    fclose(fp);
    printf("%d bytes", len);
    return 0;
}