#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_NUM 300
#define SIZE_PRIMES_ARRAY 100
int main()
{
    int primes[SIZE_PRIMES_ARRAY] = {1, 2, 3};
    int p;
    double remainder;
    for (int num=5; num<MAX_NUM; num+=2){
        // Not divisible by any
        for (int i=0; i<SIZE_PRIMES_ARRAY; i++){
            // Checked every previous prime - therefore this is definately prime!
            if (primes[i]==0) {
                primes[i]=num;
                break;
            }
            remainder = num%primes[i];
            printf("Num: %3d, Index: %2d, Prime: %5d, Rem: %0.2f", num, i, primes[i], remainder);
            printf("\n");

            if (remainder == 0.0) {
                break;
            }
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
            // sqrt(primes[i]);

        }
    }
    for (int i=0; i<SIZE_PRIMES_ARRAY; i++){
        printf(" %d ", primes[i]);
    }
    printf("\n");
    return 0;
}