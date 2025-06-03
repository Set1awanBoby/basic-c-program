#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // function prototype
bool ageCheck(int age);

int main()
{

    /*
    function prototype = Provide the compiler w/ information about a function's:
        name, return type, and parameters before its actual definition.
        Enables type checking and allows functions to be used before
        they're defined.
        Imporves readability, organization, and helps prevent errors.
    */

    hello("Babi", 21);

    if (ageCheck(30))
    {
        printf("You're old enough");
    }
    else
    {
        printf("You must be 16+ years old");
    }

    return 0;
}

void hello(char name[], int age)
{
    printf("Hello %s\n", name);
    printf("You're %d years old\n", age);
}

bool ageCheck(int age)
{
    return age >= 16;
}