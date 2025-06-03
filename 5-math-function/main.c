#include <stdio.h>
#include <math.h>

int main()
{
    float num;
    int x = 9;
    int y = 2;
    float z = 3.14;
    float p = 3.50;
    int q = -3;
    int a = 45;

    num = sqrt(x);   // square root / akar kuadrat
    num = pow(y, 4); // power / pangkat
    num = round(z);  // round / membulatkan num >= .50 akan di bulatkan ke atas
    num = round(p);
    num = ceil(p);  // selalu di bulatkan ke atas
    num = floor(p); // selalu di bulatkan ke bawah
    num = abs(q);   // selalu positif (absolute value)
    num = log(x);
    num = sin(a);
    num = cos(a);
    num = tan(a);

    return 0;
}