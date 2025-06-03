#include <stdio.h>

void birtday(int *age)
{
    (*age)++;
}

int main()
{
    /*
        pointer = A variable that stores the memory address of another variable.
                Benefit: They help avoid wasting memory by allowing you to pass
                the address of a large data structure instead of copying the entire data
    */

    int age = 25;
    int *pAge = &age;

    birtday(&age);

    printf("You are %d years old", age);

    return 0;
}
