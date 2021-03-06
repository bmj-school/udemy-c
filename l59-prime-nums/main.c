#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

#define MAX_NUM 300
#define SIZE_PRIMES_ARRAY 100
int main()
{
    int primes[SIZE_PRIMES_ARRAY] = {2, 3};
    int p;
    double remainder;
    for (int num=5; num<MAX_NUM; num+=2){
        // Not divisible by any
        for (int i=0; i<SIZE_PRIMES_ARRAY; i++){
            // Checked every previous prime - therefore this is definately prime!
            if (primes[i]==0) {
                printf("*** %d is PRIME!!! ***\n", num);
                primes[i]=num;
                break;
            }

            if (num / primes[i] <= primes[i]) {
                printf("NOT PRIME (sqrt limit)!\n");
                break;
            }

            printf("%d/%d ",num, primes[i]);
            remainder = num%primes[i];

            // printf("Num: %3d, Index: %2d, Prime: %5d, Rem: %0.2f", num, i, primes[i], remainder);
            // printf("\n");

            // If num is divisible, it's definately NOT prime, break and don't add to list!
            if (remainder == 0.0) {
                printf("NOT PRIME!\n");
                break;
            }
            printf("\n");

            // printf("Remainder? %d", remainder>0.0);
            // if (remainder > 0.0) {
            //     primes[i] = num;
            //     printf("Not divisable\n");
            //     continue;
            // } else {
            //     printf("\n");
            // }


            // p / primes[i] >= primes[i];

            // Can also skip even numbers

            // Ensure that p is not higher than square root of the prime

        }
    }
    for (int i=0; i<SIZE_PRIMES_ARRAY; i++){
        printf(" %d ", primes[i]);
    }
    printf("\n");
    return 0;
}