#include <stdio.h>
#include <stdbool.h>

int main()
{
    // ternary operator ? = shorthand for if-else statements
    // (condition) ? value_if_true : value_if_false

    /*
    int num = 4;

    printf("%d is %s", num, (num % 2 == 0) ? "even" : "odd");
    */

    int hours = 11;
    int minutes = 30;

    printf("%02d:%02d %s", hours, minutes, (hours < 12) ? "AM" : "PM");

    return 0;
}