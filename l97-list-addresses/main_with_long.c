#include <string.h>
#include <stdio.h>

int main()
{
    int i;

    long multiple[] = {15, 25L, 35L, 45L};
    long * p = multiple;

    printf("Type long occupies %d bytes\n", (int)sizeof(long));

    for (i = 0; i<sizeof(multiple)/sizeof(multiple[0]); ++i)
    {
        printf("multiple[%d]=%lu, *(p+%d)=%lu ",
            i, multiple[i],
            i, *(p+i));
        printf("&multiple[%d]=%p, p+%d=%p\n",
            i, &multiple[i], i, p+i);
    }

    return 0;
}