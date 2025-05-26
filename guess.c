#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random, guess, Guess_NO = 0;
    srand(time(NULL));

    printf("Welcome to Number Guessing Game\n");
    random = (rand() % 100) + 1;

    do {
        printf("\nPlease Enter your Guess between 1 - 100: ");
        if (scanf("%d", &guess) != 1) {  // handle invalid input
            printf("Invalid input! Please enter an integer.\n");
            while(getchar() != '\n');   // clear input buffer
            continue;
        }

        if (guess < 1 || guess > 100) {
            printf("Out of range! Guess must be between 1 and 100.\n");
            continue;
        }

        Guess_NO++;

        if (guess < random) {
            printf("Guess a Larger number...!\n");
        } else if (guess > random) {
            printf("Guess a smaller number...!\n");
        } else {
            printf("Congratulations!! You have successfully guessed the number in %d attempts.\n", Guess_NO);
        }
    } while (guess != random);

    printf("\nBye Bye!! Thanks for Playing!");
    printf("\nDeveloped by: Parth Kariya\n");

    return 0;
}
