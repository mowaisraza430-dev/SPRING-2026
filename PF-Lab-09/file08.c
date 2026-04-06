#include <stdio.h>

int main() {
    void *sensor;

    int vibrations = 847;
    sensor = &vibrations;
    printf("Vibrations: %d\n", *(int *)sensor);
    printf("Address: %p\n\n", (void *)sensor);

    float temperature = 73.6;
    sensor = &temperature;
    printf("Temperature: %.2f\n", *(float *)sensor);
    printf("Address: %p\n\n", (void *)sensor);

    char status = 'W';
    sensor = &status;
    printf("Status: %c\n", *(char *)sensor);
    printf("Address: %p\n\n", (void *)sensor);

    if (*(char *)sensor == 'N') {
        printf("Alert: Normal condition.\n");
    } else if (*(char *)sensor == 'W') {
        printf("Alert: Warning! Check the system.\n");
    } else if (*(char *)sensor == 'C') {
        printf("Alert: Critical! Immediate action required.\n");
    } else {
        printf("Alert: Unknown status code.\n");
    }

    return 0;
}
