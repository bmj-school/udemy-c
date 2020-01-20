#include <stdio.h>
// #include <time.h>
// #include <math.h>
// #include <stdlib.h>

#define YEAR_ROWS 5
#define COLS_MONTHS 12
int main()
{
    float rain[YEAR_ROWS][COLS_MONTHS] = {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    int yr, mon;

    float totalAnnualRain = 0;
    printf("Years:\n");
    for (yr; yr<YEAR_ROWS; yr++) {
        totalAnnualRain = 0;

        printf("%d:", yr);

        for (mon=0; mon<COLS_MONTHS; mon++) {
            totalAnnualRain = totalAnnualRain + rain[yr][mon];
            printf("%5.1f", rain[yr][mon]);

        }
        printf(" | %5.1f ", totalAnnualRain);
        printf(" | %5.1f ", totalAnnualRain/COLS_MONTHS);
        printf("\n");
    }


    printf("\nMonths:\n");
    for (mon=0; mon<COLS_MONTHS; mon++) {
        printf("%3d:", mon);
        for (yr=0; yr<YEAR_ROWS; yr++) {
            // totalAnnualRain = totalAnnualRain + rain[yr][mon];

            printf("%5.1f", rain[yr][mon]);
        }
        printf("\n");
    }
    printf("DONE\n");

    return 0;

}