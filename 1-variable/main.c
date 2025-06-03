#include <stdio.h>
#include <stdbool.h> //boolean

int main()
{
    // variable = a reuseable container for a value
    /*
    int = whole numbers (4 butes in modern system)
    float = single-precision decimal number (4 bytes)
    double = double-precision decimal number (8 bytes)
    char = single character (1 byte)
    char[] = array of characters (size varies)
    bool = true or false (1 byte, requires <stdbool.h>)
    */

    int age = 25;
    int year = 2025;
    int quantity = 1;
    // printf("You are %d years old in %d\n", age, year);

    float gpa = 2.5;
    float price = 19.99;
    float temprature = -10.1;
    /*
    printf("the temperature is %f°C\n", temprature);
    printf("the temperature is %.1f°C\n", temprature);
    */

    double pi = 3.14159265358979;
    double e = 2.7182818284590;
    /*
    printf("The value of pi %lf\n", pi);
    printf("The value of pi %lf\n", e);
    printf("The value of pi %.15lf\n", pi);
    printf("The value of pi %.15lf\n", e);
    */

    char grade = 'F';
    char symbol = '!';
    // printf("Your grade is %c%c\n", grade, symbol);

    char name[] = "Boby";
    // printf("hello %s\n", name);

    bool isOnline = 1;
    if (isOnline)
    {
        printf("You're online");
    }
    else
    {
        printf("You're offline now");
    };
    // 1 = true, 0 = false
    return 0;
}