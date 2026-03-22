#include <stdio.h>

int main() {
    int t[7][3] = {
        {30, 35, 28},
        {32, 36, 29},
        {31, 34, 27},
        {33, 37, 30},
        {29, 33, 26},
        {34, 38, 31},
        {35, 39, 32}
    };

    int i, j;
    int max = t[0][0];

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 3; j++) {
            if (t[i][j] > max) {
                max = t[i][j];
            }
        }
    }

    printf("Highest temperature = %d\n", max);

    float avg;

    for (i = 0; i < 7; i++) {
        int sum = 0;
        for (j = 0; j < 3; j++) {
            sum += t[i][j];
        }
        avg = sum / 3.0;
        printf("Day %d average = %.2f\n", i + 1, avg);
    }

    return 0;
}
