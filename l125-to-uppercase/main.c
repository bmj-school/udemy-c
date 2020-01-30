#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


int main()
{
    FILE *fpOriginal = NULL;
    FILE *fpTarget = NULL;

    int count=0;
    char c;

    char printChar;
    bool flgLower;

    /* Open both files */
    fpOriginal = fopen("file.txt", "r");
    fpTarget = fopen("target.txt", "w");

    if (fpOriginal == NULL)
    {
        perror("ERROR");
        return (-1);
    }
    if (fpTarget == NULL)
    {
        perror("ERROR");
        return (-1);
    }

    while ((c = fgetc(fpOriginal)) != EOF)
    {
        printf("Char:%c", c);
        if (c == '\n') // NOTE: Need single quotes here!!!
        {
            printf("NEWLINE!");
            count++;
        }

        // CONVERSION
        if (islower(c))
            flgLower = true;
        else
            flgLower = false;

        if (flgLower)
            printChar = c - 32;
        else
            printChar = c;

        // LOGGING
        printf(" [%i]", flgLower);
        printf(" -> %c ", printChar);
        printf("\n");

        fputc(printChar, fpTarget);
    }
    printf("%d lines counted", count);



    fclose(fpOriginal);
    fclose(fpTarget);
    return 0;
}