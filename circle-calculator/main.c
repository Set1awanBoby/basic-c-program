#include <stdio.h>
#include <math.h>

int main()
{
    double rad = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &rad);

    area = PI * pow(rad, 2);
    surfaceArea = 4 * PI * pow(rad, 2);
    volume = (4.0 / 3.0) * PI * pow(rad, 3);

    printf("Area: %.2lf\n", area);
    printf("Surface Area: %.2lf\n", surfaceArea);
    printf("Volume: %.2lf\n", volume);

    return 0;
}