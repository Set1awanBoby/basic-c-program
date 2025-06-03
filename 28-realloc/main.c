#include <stdio.h>
#include <stdlib.h>

int main()
{
    // realloc() = Reallocation.
    //          Resize previously allocated memory
    //          realloc(ptr, bytes)

    int num;
    printf("Enter the number of prices: ");
    scanf("%d", &num);

    float *prices = malloc(num * sizeof(float));

    if (prices == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < num; i++)
    {
        printf("Enter price #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    int newNum;
    printf("Enter a new number of prices: ");
    scanf("%d", &newNum);

    float *temp = realloc(prices, newNum * sizeof(float));

    if (temp == NULL)
    {
        printf("Could not reallocate memory!\n");
    }
    else
    {
        prices = temp;
        temp = NULL;

        for (int i = num; i < newNum; i++)
        {
            printf("Enter price #%d: ", i + 1);
            scanf("%f", &prices[i]);
        }

        for (int i = 0; i < newNum; i++)
        {
            printf("%.2f ", prices[i]);
        }
    }

    free(prices);
    prices = NULL;

    return 0;
}
