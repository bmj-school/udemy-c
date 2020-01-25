#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    fpos_t position;

    fp = fopen("file.txt", "w+");

    if (fp == NULL)
    {
        perror("ERROR");
        return (-1);
    }

    fgetpos(fp, &position);

    fputs("Hello!", fp);
    return 0;
}