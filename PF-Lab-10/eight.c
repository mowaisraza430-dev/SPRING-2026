#include <stdio.h>

int main() {
    FILE *fptr;
    int score, i, val, sum = 0;
    float avg;

    fptr = fopen("survey.txt", "w");

    if (fptr == NULL) {
        printf("Error: File cannot be opened\n");
        return 0;
    }

    for (i = 0; i < 5; i++) {
        printf("Enter score (1-10): ");
        scanf("%d", &score);

        fprintf(fptr, "%d\n", score);
    }

    fclose(fptr);

    fptr = fopen("survey.txt", "r");

    if (fptr == NULL) {
        printf("Error: File cannot be opened\n");
        return 0;
    }

    while (fscanf(fptr, "%d", &val) == 1) {
        sum += val;
    }

    fclose(fptr);

    avg = sum / 5.0;

    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}
