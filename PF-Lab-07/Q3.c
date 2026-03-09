#include <stdio.h>

int main() {
    int pass[10], fail[10];
    int p = 0, f = 0, mark;
    float passSum = 0, failSum = 0;
    int i;

    for(i = 0; i < 10; i++) {
        printf("Enter marks for student %d (-1 to exit): ", i + 1);
        scanf("%d", &mark);
        if(mark == -1) break;
        if(mark >= 5 && mark <= 10) { pass[p++] = mark; passSum += mark; }
        else if(mark >= 0 && mark < 5) { fail[f++] = mark; failSum += mark; }
    }

    printf("Pass marks: ");
    for(i = 0; i < p; i++) printf("%d ", pass[i]);
    if(p > 0) printf("\nAverage: %.2f\n", passSum / p);
    else printf("\nNo pass marks\n");

    printf("Fail marks: ");
    for(i = 0; i < f; i++) printf("%d ", fail[i]);
    if(f > 0) printf("\nAverage: %.2f\n", failSum / f);
    else printf("\nNo fail marks\n");

    return 0;
}
