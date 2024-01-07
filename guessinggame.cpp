#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int randomNumber = rand() % 100 + 1; 
    int guess;
    int attempts = 0;
    int maxAttempts = 8; 

    printf("Welcome to the Number Guessing Game!\n");
    printf("Try to guess the number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess == randomNumber) {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
        } else if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }

    } while (guess != randomNumber && attempts < maxAttempts);

    if (attempts == maxAttempts) {
        printf("Sorry, you've run out of attempts. The correct number was %d.\n", randomNumber);
    }

    return 0;
}