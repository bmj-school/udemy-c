#include <stdio.h>

int main() {
    // int mins = 3001;
    unsigned int mins;
    printf("Enter minutes:");
    scanf("%d", &mins);
    double hours = (float) mins / 60;
    double days = hours / (float) 24;
    double years = days / 365;

    printf("mins %d\n", mins);
    printf("hours %f\n", hours);
    printf("days %f\n", days);
    printf("years %f\n", years);
}