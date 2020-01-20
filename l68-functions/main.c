#include <stdio.h>
#include <stdbool.h>

int gcdBetter(int u, int v);

int gcdBrute(int a, int b)
{
    int thisgcd;
    bool flgVerbose = false;
    for (thisgcd=b; thisgcd!=0; thisgcd=thisgcd -1 )
    {
        if (flgVerbose)
            printf("%d %% %d = %d %d %% %d = %d\n", a, thisgcd, a % thisgcd,  b, thisgcd, b % thisgcd);
        if (a % thisgcd == 0 && b % thisgcd == 0)
        {
            return thisgcd;
        }
    }
    return -1;
}


float absoluteValue(float num)
{
    if (num < 0)
        return -num;
    else return num;
}

float mysqrt(float num)
{
    const float epsilon = 0.00001;
    float guess = 1.0;

    while (absoluteValue(guess * guess - num)>=epsilon)
        guess = (num/guess + guess) / 2.0;

    return guess;
}

int main()
{
    int n1 = 10;
    int n2 = 60;

    printf("GCD of %d and %d is %d\n", n1, n2, gcdBrute(n1,n2));

    printf("Abs of %f is %f\n", -1., absoluteValue(-1));
    printf("Abs of %f is %f\n", 1., absoluteValue(1));

    printf("Sqrt of %f is %f\n", 4.1, mysqrt(4.1));
    printf("Sqrt of %f is %f\n", 64.1, mysqrt(64.1));
    printf("Sqrt of %f is %f\n", -10.1, mysqrt(10.1));

    return 0;
}