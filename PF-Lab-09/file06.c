#include <stdio.h>

float totalRevenue(float bills[], int n);
int bestTable(float bills[], int n);
int isProfitable(float total);

int main() {
    float bills[5];
    float total;
    int best;
    int profit;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter bill for Table %d: ", i + 1);
        scanf("%f", &bills[i]);
    }

    total = totalRevenue(bills, 5);
    best = bestTable(bills, 5);
    profit = isProfitable(total);

    printf("\n----- Closing Summary -----\n");
    printf("Total Revenue: Rs. %.2f\n", total);
    printf("Best Performing Table: Table %d\n", best + 1);

    if (profit)
        printf("Status: Profitable\n");
    else
        printf("Status: Not Profitable\n");

    return 0;
}

float totalRevenue(float bills[], int n) {
    float sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        sum += bills[i];
    }
    return sum;
}

int bestTable(float bills[], int n) {
    int maxIdx = 0;
    int i;
    for (i = 1; i < n; i++) {
        if (bills[i] > bills[maxIdx]) {
            maxIdx = i;
        }
    }
    return maxIdx;
}

int isProfitable(float total) {
    if (total > 10000)
        return 1;
    else
        return 0;
}
