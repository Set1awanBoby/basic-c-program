#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        calloc() = Contiguous Allocation.
            Allocates memory dynamically and sets all allocated bytes to 0.
            malloc() is faster, but calloc() leads to less bugs
            calloc(#, size)
    */

    int num = 0;
    printf("Enter the number of players: ");
    scanf("%d", &num);

    int *scores = calloc(num, sizeof(int));

    if (scores == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < num; i++)
    {
        printf("Enter score num %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < num; i++)
    {
        printf("%d ", scores[i]);
    }

    free(scores);
    scores = NULL;

    return 0;
}
