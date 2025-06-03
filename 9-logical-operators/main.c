#include <stdio.h>

int main()
{

    // logical operators = Used to combine or modify boolean expressions.

    // && = AND (if one of both condition true and false it return false)
    // || = OR (if one of both condition true and false it return true)
    // !  = NOT (false = true, true = false)
    int temp = 0;

    if (temp > 0 || temp < 30)
    {
        printf("The temperature is good");
    }
    else
    {
        printf("The tempertaure is bad");
    }

    if (temp <= 0 && temp >= 30)
    {
        printf("The tempertaure is bad");
    }
    else
    {
        printf("The temperature is good");
    }

    return 0;
}