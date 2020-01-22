#include <string.h>
#include <stdio.h>

int main()
{
    int i;

    char multiple[] = "a string";
    char * p = multiple;
    for (i = 0; i<strlen(multiple); ++i)
    {
        printf("multiple[%d]=%c, *(p+%d)=%c ",
            i, multiple[i],
            i, *(p+i));
        printf("&multiple[%d]=%p, p+%d=%p\n",
            i, &multiple[i], i, p+i);
    }

    return 0;
}