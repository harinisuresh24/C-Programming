
#include <stdio.h>

int main()
{
    int secret = 35;
    int guess;
    int attempts = 0;

    printf("===== NUMBER GUESSING GAME =====\n");
    printf("Guess the number between 1 and 100!\n");

    do
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if(guess > secret)
        {
            printf("Too high! Try again.\n");
        }
        else if(guess < secret)
        {
            printf("Too low! Try again.\n");
        }
        else
        {
            printf("Congratulations! You guessed it!\n");
            printf("Number of attempts: %d\n", attempts);
        }

    } while(guess != secret);

    return 0;
}
