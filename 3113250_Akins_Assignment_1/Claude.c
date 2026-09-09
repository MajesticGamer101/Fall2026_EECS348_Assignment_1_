/*******************************************************************
 * Program:      EECS 348 Assignment 1 - Number Guessing Game
 *
 * Description:  C program that picks a secret number between 1
 *               and 10. The user gets up to 3 tries to guess the
 *               number, and is told after each wrong guess whether
 *               it was too high or too low.
 *
 * Input:        Terminal input - the user's numeric guesses,
 *               entered one per attempt (up to 3 attempts).
 *
 * Output:       Terminal output - prompts for each guess, "Too
 *               high!"/"Too low!" feedback after wrong guesses, and
 *               a final win/lose message.
 *
 * Collaborators: [None / list names here]
 *
 * Other sources: Initial version drafted with the assistance of
 *               Claude (Anthropic AI assistant, claude.ai chat),
 *               based on requirements the author supplied. Reviewed
 *               and understood by the author before submission.
 *
 * Author:       Joseph Akins
 * Creation date: [9/8/26]
 * Revision date: [9/8/26]
 * Revisions:     Added proper comments 
 *******************************************************************/

#include <stdio.h>  // Needed for printf() and scanf()

int main(void) {

    /* ---------------------------------------------------------
     * Variable declarations
     * Source: AI-generated (Claude), reviewed by author
     * --------------------------------------------------------- */
    int secret = 7;   // The fixed secret number the user must guess
    int guess;        // Stores the user's guess each attempt
    int tries = 3;     // Maximum number of guesses allowed
    int won = 0;       // Flag: 0 = hasn't won yet, 1 = guessed correctly

    /* ---------------------------------------------------------
     * Introductory prompt printed once before the game starts
     * Source: AI-generated (Claude), reviewed by author
     * --------------------------------------------------------- */
    printf("I'm thinking of a number between 1 and 10.\n"); // Tell the user the game's range
    printf("You have %d tries to guess it.\n\n", tries);    // Tell the user how many guesses they get

    /* ---------------------------------------------------------
     * Main guessing loop
     * Runs once per attempt, from attempt 1 up through `tries`.
     * Source: AI-generated (Claude), reviewed by author
     * --------------------------------------------------------- */
    for (int attempt = 1; attempt <= tries; attempt++) {
        // attempt: loop counter, starts at 1, increases by 1 each pass,
        // and stops the loop once attempt exceeds `tries` (3)

        printf("Attempt %d of %d - Enter your guess: ", attempt, tries); // Show which attempt this is
        scanf("%d", &guess); // Read the user's typed guess into `guess`

        if (guess == secret) {
            // The guess matches the secret number exactly
            won = 1;   // Record that the user won
            break;     // Exit the for-loop immediately - no more guesses needed
        } else if (guess > secret) {
            // The guess is larger than the secret number
            printf("Too high!\n\n"); // Let the user know to guess lower next time
        } else {
            // The only remaining case: guess is smaller than the secret number
            printf("Too low!\n\n"); // Let the user know to guess higher next time
        }
    }

    /* ---------------------------------------------------------
     * Final result: report win or loss based on the `won` flag
     * Source: AI-generated (Claude), reviewed by author
     * --------------------------------------------------------- */
    if (won) {
        // `won` is 1, so the loop ended because of a correct guess
        printf("You got it! The number was %d. You win!\n", secret);
    } else {
        // `won` is still 0, so the loop ended because attempts ran out
        printf("Sorry, you're out of tries. The number was %d. You lose!\n", secret);
    }

    return 0; // Exit main() and signal successful program completion
}