#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    int count=0;
    char c;
    fp = fopen("file.txt", "r");

    if (fp == NULL)
    {
        perror("ERROR");
        return (-1);
    }
    while ((c = fgetc(fp)) != EOF)
    {
        printf("Char:%c\n", c);
        if (c == '\n') // NOTE: Need single quotes here!!!
        {
            printf("NEWLINE!");
            count++;
        }
    }
    printf("%d lines counted", count);
    // fseek(fp, 0, SEEK_END);

    // len = ftell(fp);
    // fclose(fp);
    // printf("%d bytes", len);
    return 0;
}