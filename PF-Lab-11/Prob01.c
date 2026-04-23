#include <stdio.h>

// Using Recursive function to calculate total power consumption
// Base case: 1 floor = 100 kWh
// Recursive case: current floor power + total of previous floors
int totalPower(int floors) {
    if (floors == 1)
        return 100;  // base case
    else
        return (100 * (1 << (floors - 1))) + totalPower(floors - 1);
        // 100 * 2^(floors-1) gives power of current floor
}

int main() {
    int floors;

    printf("Enter number of floors: ");
    scanf("%d", &floors);

    printf("Total power consumption = %d kWh\n", totalPower(floors));

    return 0;
}
