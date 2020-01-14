#include <stdio.h>

int main() {
    // int mins = 3001;
    unsigned int hours;
    unsigned int normal_hours=40;
    unsigned int ot_hours=0;
    unsigned int base_hours=0;
    printf("Hours worked:");
    scanf("%d", &hours);

    float base_pay = 12.0;
    float ot_pay = 18.0;
    float gross_salary;
    float net_salary = 0;
    float tax_rate_1 = 0.15, tax_bracket_1=150;
    float tax_rate_2 = 0.20;
    float tax_rate_3 = 0.25;
    // float tax_bracket_1 = 300;
    float tax_bracket_2 = 150;

    float taxes = 0.0;

    if (hours > normal_hours){
        ot_hours = hours - normal_hours;
        base_hours = normal_hours;
        printf("Base hours: %d\n", base_hours);
        printf("OT hours: %d\n", ot_hours);
    } else {
        ot_hours = 0;
        base_hours = hours;
        printf("Base hours: %d\n", base_hours);
        printf("OT hours: %d\n", ot_hours);
    }

    gross_salary = base_hours * base_pay + ot_hours * ot_pay;

    printf("Gross: $%.2f\n", gross_salary);

    if (gross_salary > (tax_bracket_1+tax_bracket_2))
    {
        printf("Top\n");
        taxes += 300*tax_rate_1;
        taxes += 150*tax_rate_2;
        taxes += (gross_salary - 300 - 150) * tax_rate_2;

    } else if (gross_salary > tax_bracket_1)
    {
        printf("Mid\n");
        taxes += 300*tax_rate_1;
        taxes += (gross_salary-300)*tax_rate_2;
    } else {
        taxes += gross_salary*tax_rate_1;
        printf("Low\n");
    }
    net_salary = gross_salary - taxes;
    printf("Taxes: $%.2f\n", taxes);
    printf("Net: $%.2f\n", net_salary);


}