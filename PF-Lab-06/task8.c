#include <stdio.h>

int main() {
    int guess;
    int correctNumber = 7;

    printf("----Number Guessing Game----\n");

    printf("Enter your guess: ");
    scanf("%d", &guess);

    while (guess != correctNumber) {

        if (guess > correctNumber) {
            printf("Too High!\n");
        } else {
            printf("Too Low!\n");
        }

        printf("Try again: ");
        scanf("%d", &guess);
    }

    printf("Guessed Correctly!\n");

    return 0;
}
