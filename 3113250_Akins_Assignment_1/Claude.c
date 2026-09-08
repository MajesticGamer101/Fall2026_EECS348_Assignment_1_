#include <stdio.h>

int main(void) {
    int secret = 7;      // fixed secret number
    int guess;
    int tries = 3;
    int won = 0;

    printf("I'm thinking of a number between 1 and 10.\n");
    printf("You have %d tries to guess it.\n\n", tries);

    for (int attempt = 1; attempt <= tries; attempt++) {
        printf("Attempt %d of %d - Enter your guess: ", attempt, tries);
        scanf("%d", &guess);

        if (guess == secret) {
            won = 1;
            break;          // stop the loop immediately on a correct guess
        } else if (guess > secret) {
            printf("Too high!\n\n");
        } else {
            printf("Too low!\n\n");
        }
    }

    if (won) {
        printf("You got it! The number was %d. You win!\n", secret);
    } else {
        printf("Sorry, you're out of tries. The number was %d. You lose!\n", secret);
    }

    return 0;
}