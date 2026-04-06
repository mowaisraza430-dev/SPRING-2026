#include <stdio.h>

int main() {
    int marks[6] = {55, 48, 60, 42, 50, 57};
    int *p = marks;
    int highest = *p;
    int i;

    printf("Original Marks:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    for (i = 1; i < 6; i++) {
        if (*(p + i) > highest) {
            highest = *(p + i);
        }
    }

    for (i = 0; i < 6; i++) {
        *(p + i) = (int)(((float)*(p + i) / highest) * 100);
    }

    printf("Scaled Marks:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}
