#include <stdio.h>

int main() {
    float temperature;
    float sum = 0;
    int count = 0;

    printf("Enter temperature readings (stops at -999):\n");
    scanf("%f", &temperature);

    while (temperature != -999) {
        sum = sum + temperature;
        count++;

        scanf("%f", &temperature);
    }

    if (count > 0) {
        printf("Average Temperature = %.2f\n", sum / count);
    } else {
        printf("No valid temperature readings entered.\n");
    }

    return 0;
}
