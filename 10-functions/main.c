#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age)
{
    printf("\nHappy birthday to you");
    printf("\nHappy birthday to you");
    printf("\nHappy birthday to %s", name);
    printf("\nHappy birthday to you");
    printf("\nYou're %d years old now!!\n", age);
}

int main()
{
    // function = A reuseable section of code that can be invoked "called"
    //      Arguments can be sent to a function so that it can use them

    char name[50];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age);

    return 0;
}