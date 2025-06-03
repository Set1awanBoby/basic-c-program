#include <stdio.h>

int main()
{
    // switch = An alternative to using many if-else statements
    //      More efficient w/ fixed intefer values

    int dayOfWeek = 0;

    prinf("Enter the day of the week (1-7): ");
    scanf("%d", &dayOfWeek);

    switch (dayOfWeek)
    {
    case 1:
        printf("It is Monday");
        break;
    case 2:
        printf("It is Tuesday");
        break;
    case 3:
        printf("It is Wednesday");
        break;
    case 4:
        printf("It is Thursday");
        break;
    case 5:
        printf("It is Friday");
        break;
    case 6:
        printf("It is Saturday");
        break;
    case 7:
        printf("It is Sunday");
        break;
    default:
        printf("only 7 day in the world bruh...");
    }
}