#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random, guess, no_of_guess = 0;
    srand(time(NULL));
    printf("Welcome to the world of Guessing Number\n");
    random = rand() % 100 + 1; // Generating numbers between 1-100
    do
    {
        printf("\nEnter your Guess between 1 to 100: ");
        scanf("%d", &guess);
        no_of_guess++;
        if (guess < random)
        {
            printf("Guess a Larger Number.\n");
        }
        else if (guess > random)
        {
            printf("Guess a Smaller Number.\n");
        }
        else
        {
            printf("\nCongratulations!!! You have successfully guessed the Number in %d attempts", no_of_guess);
        }

    } while (guess != random);
    printf("\nBye Bye, Thanks for Playing");
    printf("\nDeveloped by: Ankur Singh");

    return 0;
}