#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *grades;

    printf("Enter number of students: ");
    scanf("%d", &n);

    grades = (float *)malloc(n * sizeof(float));

    if (grades == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter grade for student %d: ", i + 1);
        scanf("%f", &grades[i]);
    }

    printf("\nGrades:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: %.2f\n", i + 1, grades[i]);
    }

    free(grades);

    return 0;
}
