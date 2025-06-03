#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main()
{
    // Rock paper scissors

    srand(time(NULL));

    printf("=== Rock Paper Scissors ===\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch (userChoice)
    {
    case 1:
        printf("You choose Rock\n");
        break;

    case 2:
        printf("You choose Paper\n");
        break;
    case 3:
        printf("You choose Scissors\n");
        break;
    }

    switch (computerChoice)
    {
    case 1:
        printf("Computer choose Rock\n");
        break;

    case 2:
        printf("Computer choose Paper\n");
        break;
    case 3:
        printf("Computer choose Scissors\n");
        break;
    }

    checkWinner(userChoice, computerChoice);

    return 0;
}

int getComputerChoice()
{
    return (rand() % 3) + 1;
};
int getUserChoice()
{
    int choice;

    do
    {
        printf("Choose an option\n");
        printf("1.Rock\n");
        printf("2.Paper\n");
        printf("3.Scissors\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice < 1 || choice > 3)
        {
            printf("Wrong input choose(1 - 3)\n\n");
        }

    } while (choice < 1 || choice > 3);

    return choice;
};
void checkWinner(int userChoice, int computerChoice)
{

    if (userChoice == computerChoice)
    {
        printf("It's a Tie!");
    }
    else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2))
    {
        printf("You Win!");
    }
    else
    {
        printf("You Lose!");
    }
};