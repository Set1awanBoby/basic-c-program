#include <stdio.h>
#include <windows.h>

int main()
{

    // for loop = Repeat some code a limited num of times
    //      for(Initialization; Condition; Update)

    for (int i = 10; i >= 0; i--)
    {
        Sleep(1000);
        // printf("%d\n", i);
    }
    // printf("Happy New Year!\n\n");

    // break = Break out of a loop (STOP)
    // continue = Skip current cycle of a loop (SKIP)

    for (int i = 1; i <= 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        else if (i == 8)
        {
            break;
        }

        // printf("%d\n", i);
    }

    // Nested Loops
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            // printf("%d ", i * j);
        }
        // printf("\n");
    }

    int rows;
    int col;
    char symbol;

    printf("Enter the num of rows: ");
    scanf("%d", &rows);

    printf("Enter the num of col: ");
    scanf("%d", &col);

    printf("Enter a symbol to use: ");
    scanf(" %c", &symbol);

    for (int i = 0; i < rows; i++)
    {
        for (int i = 0; i < col; i++)
        {
            printf(" %c", symbol);
        }
        printf("\n");
    }

    return 0;
}