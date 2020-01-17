#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_TRIES 5

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    printf("Time: %ld\n", t);

    int randomNumber = rand() % 21;
    printf("Random %d\n", randomNumber);

    unsigned int guess;
    for (int i = 0; i < MAX_TRIES; i++)
    {
        printf("%d tries remaining!\n", MAX_TRIES-i);
        while (1) {
            printf("Guess the number:");
            scanf("%d", &guess);
            printf("You guessed %d\n", guess);
            if (guess > 20 || guess < 0){
                continue;
            }
            break;
        }
        if (guess == randomNumber){
            printf("SUCCESS!\n");
            break;
        } else {
            printf("INCORRECT!\n");
        }
    }
}