#include <stdio.h>

int main() {
    int arr[5][6] = {
        {1, 0, 0, 1, 0, 0},
        {1, 1, 0, 1, 0, 1},
        {0, 0, 0, 0, 0, 0},
        {1, 1, 1, 0, 1, 0},
        {0, 1, 0, 0, 1, 1}
    };

    int r, c;
    int freeSeats = 0;

    for (r = 0; r < 5; r++) {
        for (c = 0; c < 6; c++) {
            if (arr[r][c] == 0) {
                freeSeats++;
            }
        }
    }

    printf("Total available seats = %d\n", freeSeats);

    int max = 0, pos = 0, count;

    for (r = 0; r < 5; r++) {
        count = 0;
        for (c = 0; c < 6; c++) {
            if (arr[r][c] == 1) {
                count++;
            }
        }

        if (count > max) {
            max = count;
            pos = r;
        }
    }

    printf("Row with maximum booked seats = Row %d\n", pos + 1);
    printf("Number of booked seats in that row = %d\n", max);

    return 0;
}
