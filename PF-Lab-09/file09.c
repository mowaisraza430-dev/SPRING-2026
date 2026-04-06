#include <stdio.h>

int main() {
    int attendance[4][5] = {
        {1, 1, 0, 1, 1},
        {1, 0, 0, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 1}
    };
    int (*p)[5] = attendance;
    int i, j, total;

    printf("----- Weekly Attendance Report -----\n");

    for (i = 0; i < 4; i++) {
        total = 0;
        printf("Student %d: ", i + 1);
        for (j = 0; j < 5; j++) {
            printf("%d ", (*(p + i))[j]);
            total += (*(p + i))[j];
        }
        printf("| Total Present: %d", total);
        if (total < 3) {
            printf(" - At risk");
        }
        printf("\n");
    }

    return 0;
}
