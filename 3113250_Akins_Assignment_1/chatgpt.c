#include <stdio.h>

int main() {
    // Variables
    int secret_number = 7;
    int guess;
    int tries;

    // Give the user up to 3 tries
    for (tries = 1; tries <= 3; tries++) {

        // Ask user for a guess
        printf("Guess the secret number between 1 and 10: ");
        scanf("%d", &guess);

        // Check the user's guess
        if (guess == secret_number) {
            printf("Correct! You win!\n");
            break;
        }
        else if (guess > secret_number) {
            printf("Too high!\n");
        }
        else {
            printf("Too low!\n");
        }
    }

    // Check if the user lost
    if (guess != secret_number) {
        printf("You lose! The secret number was %d.\n", secret_number);
    }

    return 0;
}