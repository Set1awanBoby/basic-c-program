#include <stdio.h>

double square(double num)
{
    double result = num * num;

    return result;
}

int main()
{
    // return = returns a value back to where you call a function

    double x = square(2);
    double y = square(3);
    double z = square(4);

    printf("%.2lf\n", x);
    printf("%.2lf\n", y);
    printf("%.2lf\n", z);

    return 0;
}