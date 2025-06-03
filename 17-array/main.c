#include <stdio.h>
#include <string.h>

int main()
{
    // array = A fixed-size collection of elements of the same data type
    //      (Similar to a variable, but it holds more than 1 value)

    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++)
    {
        // printf("%d ", numbers[i]);
    }

    // array and user input

    int scores[5] = {0};

    for (int i = 0; i < 5; i++)
    {
        // printf("Enter a score: ");
        // scanf("%d", &scores[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        //  printf("%d ", scores[i]);
    }

    // 2D array
    // 2D array = An where each element is an array
    //      array[][] = {{},{},{}}

    int numbers[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    { // rows
        for (int j = 0; j < 3; j++)
        { // col
          // printf("%d ", numbers[i][j]);
        }
        // printf("\n");
    }

    // Array of String

    char fruit[][10] = {"Apple", "Banana", "Coconut"};
    int size = sizeof(fruit) / sizeof(fruit[0]);

    for (int i = 0; i < size; i++)
    {
        // printf("%s ", fruit[i]);
    }

    char names[4][25] = {0};
    int rows = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < rows; i++)
    {
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for (int i = 0; i < rows; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}