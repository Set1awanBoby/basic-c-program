#include <stdio.h>

int main()
{
    // Temperature conversion program

    char choice;
    float fahrenheit;
    float celsius;

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp in Celcius (C) or Fahrenheit (F)?: ");
    scanf("%c", &choice);

    if (choice == 'C' || choice == 'c')
    {
        printf("Enter the temperature in Celcius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.1f Celsius is equal to %.1f Fahrenheit\n", celsius, fahrenheit);
    }
    else if (choice == 'F' || choice == 'f')
    {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f Fahrenheit is equal to %.1f Celsius\n", fahrenheit, celsius);
    }
    else
    {
        printf("Invalid choice! Please Select C/c or F/f\n");
    }

    return 0;
}