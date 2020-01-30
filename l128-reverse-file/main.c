#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    FILE *fp = NULL;

    int cnt;
    int i=0;
    char c;

    /* Open both files */
    fp = fopen("file.txt", "r");

    if (fp == NULL)
    {
        perror("ERROR");
        return (-1);
    }

    fseek(fp, 0, SEEK_END);

    cnt = ftell(fp);
    printf("Last position: %d",cnt);

    while (i < cnt)
    {
        i++;
        fseek(fp, -i, SEEK_END);

        c = fgetc(fp);
        printf("Char: %c",c);
        printf(", i: %d", i);
        // pos = ftell(fp);
        // printf("POSITION: %d ", pos);
        // printf("Char:%c", c);

        // if (c == '\n') // NOTE: Need single quotes here!!!
        //     printf("NEWLINE!");
        // printf("\n");

        // fseek(fp, -1L, SEEK_CUR);
        printf("\n");
    }

    fclose(fp);

    return 0;
}