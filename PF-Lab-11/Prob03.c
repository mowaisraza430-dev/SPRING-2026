#include <stdio.h>

// Recursive function to count number of ways
// Base cases: n == 0 or n == 1 ? 1 way
int countWays(int n) {
    if (n == 0 || n == 1)
        return 1;

    return countWays(n - 1) + countWays(n - 2);
}

// Function to print all possible paths
void printPaths(int n, int path[], int index) {
    int i;  // declare at top (exam-safe)

    // Base case: exact step reached
    if (n == 0) {
        for (i = 0; i < index; i++) {
            printf("%d", path[i]);
            if (i < index - 1)
                printf("+");
        }
        printf("\n");
        return;
    }

    // Stop if exceeded
    if (n < 0)
        return;

    // Take 1 step
    path[index] = 1;
    printPaths(n - 1, path, index + 1);

    // Take 2 steps
    path[index] = 2;
    printPaths(n - 2, path, index + 1);
}

int main() {
    int n;
    int path[20];  // enough for n = 15

    printf("Enter value of N (1 to 15): ");
    scanf("%d", &n);

    printf("Total number of ways: %d\n", countWays(n));

    printf("Paths:\n");
    printPaths(n, path, 0);

    return 0;
}
