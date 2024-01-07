#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_RIDDLES 5

typedef struct {
    char question[100];
    char answer[10];
} riddle_t;

riddle_t riddles[MAX_RIDDLES] = {
    {"What has a face and two hands but no arms or legs?", "clock"},
    {"What can you break, even if you never pick it up or touch it?", "promise"},
    {"I have keys, but no locks and space, but no rooms. You can enter, but can't go outside. What am I?", "keyboard"},
    {"This belongs to you, but everyone else uses it.", "name"},
    {"What can you catch, but not throw?", "cold"}
};

int random(int n) {
    return rand() % n;
}

void play_riddle_game() {
    char choice[10];
    char answer[10];
    int riddle_index = 0;
    int exit_flag = 0;
    int correct_answers = 0; // Add a variable to keep track of correct answers

    printf("Welcome to the riddle game!\n");
    printf("You will be asked some riddles and you have to guess the answer.\n");
    printf("You can exit the game at any time by entering \"exit\" as your choice or answer.\n");
    printf("Let's begin!\n");

    while (!exit_flag && riddle_index < MAX_RIDDLES) {
        printf("\nRiddle %d: %s\n", riddle_index + 1, riddles[riddle_index].question);
        printf("Enter your answer: ");
        scanf("%9s", answer);
        if (strcmp(answer, "exit") == 0) {
            exit_flag = 1;
        } else {
            if (strcmp(answer, riddles[riddle_index].answer) == 0) {
                printf("That's correct!\n");
                correct_answers++; // Increment the count of correct answers
            } else {
                printf("That's wrong. The correct answer is %s.\n", riddles[riddle_index].answer);
            }
        }
        riddle_index++;
    }

    printf("\nThank you for playing the riddle game!\n");
    printf("You answered %d out of %d riddles correctly.\n", correct_answers, MAX_RIDDLES); // Use correct_answers here
    printf("Goodbye!\n");
}

int main() {
    int i;
    srand(time(NULL));
    for (i = 0; i < MAX_RIDDLES; i++) {
        int j = random(MAX_RIDDLES);
        riddle_t temp = riddles[i];
        riddles[i] = riddles[j];
        riddles[j] = temp;
    }
    play_riddle_game();
    return 0;
}
