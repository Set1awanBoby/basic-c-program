#include <stdio.h>

int main()
{
    // if statement = Do some code if a condition is true.
    //      if the condition is false, don't do it.

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You're an adult");
    }
    else if (age < 0)
    {
        printf("You haven't been born yet");
    }
    else
    {
        printf("You are a child");
    }

    return 0;
}