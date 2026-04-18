#include <stdio.h>

int main() {
    FILE *fptr;
    char name[50];
    int grade, i;

    fptr = fopen("grades.txt", "w");

    if (fptr == NULL) {
        printf("Error: File cannot be opened\n");
        return 0;
    }

    for (i = 0; i < 3; i++) {
        printf("Enter student name: ");
        scanf("%s", name);

        printf("Enter grade: ");
        scanf("%d", &grade);

        fprintf(fptr, "%s %d\n", name, grade);
    }

    fclose(fptr);

    fptr = fopen("grades.txt", "r");

    if (fptr == NULL) {
        printf("Error: File cannot be opened\n");
        return 0;
    }

    printf("\nStored Records:\n");

    while (fscanf(fptr, "%s %d", name, &grade) == 2) {
        printf("%s %d\n", name, grade);
    }

    fclose(fptr);

    return 0;
}
