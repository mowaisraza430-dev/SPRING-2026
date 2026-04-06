#include <stdio.h>

int totalRuns(int arr[], int n);
int highestScore(int arr[], int n);
int aboveAverage(int arr[], int n, float avg);

int main() {
    int scores[10];
    int total, highest, count;
    float average;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Enter score for match %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    total = totalRuns(scores, 10);
    average = (float)total / 10;
    highest = highestScore(scores, 10);
    count = aboveAverage(scores, 10, average);

    printf("\n----- Performance Report -----\n");
    printf("Total Runs: %d\n", total);
    printf("Average Runs: %.2f\n", average);
    printf("Highest Score: %d\n", highest);
    printf("Matches Above Average: %d\n", count);

    return 0;
}

int totalRuns(int arr[], int n) {
    int sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int highestScore(int arr[], int n) {
    int max = arr[0];
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int aboveAverage(int arr[], int n, float avg) {
    int count = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] > avg) {
            count++;
        }
    }
    return count;
}
