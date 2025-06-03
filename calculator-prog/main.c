#include <stdio.h>

int main()
{
    // calculator program

    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            printf("can't divide by zero!\n");
            return 0;
        }
        else
        {
            result = num1 / num2;
        }
        break;

    default:
        printf("Enter the correct operator\n");
        break;
    }

    printf("Result: %.4lf", result);
    return 0;
}