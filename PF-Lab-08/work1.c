#include <stdio.h>

int main() {
    int marks[4][3] = {
        {80, 75, 90},
        {60, 70, 85},
        {88, 92, 79},
        {55, 65, 70}
    };

    int i, j;
    int total;

    
    printf("Total marks of each student:\n");
    for (i = 0; i < 4; i++) {
        total = 0;
        for (j = 0; j < 3; j++) {
            total += marks[i][j];
        }
        printf("Student %d = %d\n", i + 1, total);
    }

    
    printf("\nAverage marks of each subject:\n");
    float avg;
    for (j = 0; j < 3; j++) {
        total = 0;
        for (i = 0; i < 4; i++) {
            total += marks[i][j];
        }
        avg = total / 4.0;
        printf("Subject %d = %.2f\n", j + 1, avg);
    }

    return 0;
}
