#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // number guessing game

    srand(time(NULL));

    int guess;
    int tries;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;

    printf("=== Number Guessing Game ===");

    do
    {
        printf("Guess a number between %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;

        if (guess < answer)
        {
            printf("Too Low\n");
        }
        else if (guess > answer)
        {
            printf("Too High\n");
        }
        else
        {
            printf("Correct!\n");
        }

    } while (guess != answer);

    printf("The answer is %d\n", answer);
    printf("It took you %d tries", tries);

    return 0;
}