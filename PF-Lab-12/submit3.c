#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *buffer;

    printf("Enter number of sensors: ");
    scanf("%d", &n);

    buffer = (float *)calloc(n, sizeof(float));

    if (buffer == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("\nInitial values in buffer:\n");
    for (i = 0; i < n; i++) {
        printf("Sensor %d: %.2f\n", i + 1, buffer[i]);
    }

    printf("\nEnter temperature readings:\n");
    for (i = 0; i < n; i++) {
        printf("Sensor %d: ", i + 1);
        scanf("%f", &buffer[i]);
    }

    printf("\nUpdated Sensor Readings:\n");
    for (i = 0; i < n; i++) {
        printf("Sensor %d: %.2f\n", i + 1, buffer[i]);
    }

    free(buffer);
    buffer = NULL;

    return 0;
}
