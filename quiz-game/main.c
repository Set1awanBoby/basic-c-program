#include <stdio.h>
#include <ctype.h>

int main()
{
    // Quiz Game

    char question[][100] = {"What is the largest planet in the solar system?",
                            "What is the hottest planet?",
                            "What planet has the most moons?",
                            "Is the Earth flat?"};
    char options[][100] = {"A.Jupiter\nB.Saturn\nC.Uranus\nD.Neptune",
                           "A.Mercury\nB.Venus\nC.Earth\nD.Mars",
                           "A.Earth\nB.Mars\nC.Jupiter\nD.Saturn",
                           "A.Yes\nB.No\nC.Maybe\nD.Sometimes"};

    char answerKey[] = {'A', 'B', 'D', 'B'};

    int questionCount = sizeof(question) / sizeof(question[0]);

    char guess = '\0';
    int score;

    printf("=== Quiz Game ===");

    for (int i = 0; i < questionCount; i++)
    {
        printf("\n%s\n", question[i]);
        printf("%s\n", options[i]);
        printf("Enter your choice: ");
        scanf("%c", &guess);

        guess = toupper(guess);

        if (guess == answerKey[i])
        {
            printf("Correct\n");
            score++;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    printf("\nYour score is %d out of %d points\n", score, questionCount);
}