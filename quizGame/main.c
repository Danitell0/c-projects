#include <stdio.h>
#include <ctype.h>

int main()
{
    // *** --- QUIZ GAME --- ***

    char questions[][100] = {"What is the capital of Portugal?\n",
                             "How many continets are there in the world?\n",
                             "Which planet is known as the Red Planet?\n",
                             "What is the largest ocean on Earth?\n",
                             "What is H2O commonly known as?\n"};

    char options[][100] = {"A. Paris\nB. Lisbon\nC. Berlin\n",
                           "A. 5\nB. 6\nC. 7\n",
                           "A. Jupiter\nB. Mars\nC. Venus\n",
                           "A. Pacific Ocean\nB. Atlantic Ocean\nC. Indian Ocean\n",
                           "A. Salt\nB. Water\nC. Sugar\n"};

    char answerKey[] = {'B', 'C', 'B', 'A', 'B'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);
    char guess = '\0';
    int score = 0;

    printf("*** --- QUIZ GAME --- ***\n");
    printf("-------------------------\n\n");

    for (int i = 0; i < questionCount; i++)
    {
        printf("%s\n", questions[i]);
        printf("%s\n", options[i]);
        printf("Enter your choice(A, B, C): ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if (guess == answerKey[i])
        {
            printf("\nCORRECT!\n");
            score++;
        }
        else
        {
            printf("\nIncorrect!!\n");
        }
    }

    printf("\nYour score is %d out of %d!", score, questionCount);

    return 0;
}
