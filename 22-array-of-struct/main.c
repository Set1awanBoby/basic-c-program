#include <stdio.h>

typedef struct
{
    char model[25];
    int year;
    int price;
} Car;

int main()
{
    Car cars[] = {{"Mustang", 2025, 32000},
                  {"BMW", 2024, 35000},
                  {"Porsche", 2026, 52000}};

    int num = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < num; i++)
    {
        printf("%s %d %d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}
