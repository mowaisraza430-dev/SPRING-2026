#include <stdio.h>

int main() {
    int score;
    int distinction = 0, pass = 0, fail = 0;

    printf("Enter student score from (0-100).\n");
    printf("Enter -1 to stop.\n");

    scanf("%d", &score);

    while (score != -1) {

        if (score >= 0 && score <= 100) {

            if (score >= 75) {
                distinction++;
            } 
            else if (score >= 50) {
                pass++;
            } 
            else {
                fail++;
            }

        } else {
            printf("Invalid score entered! Please enter bw 0 and 100.\n");
        }

        scanf("%d", &score);
    }

    printf("\n------Results-----\n");
    printf("Distinction (>=75): %d\n", distinction);
    printf("Pass (50–74): %d\n", pass);
    printf("Fail (<50): %d\n", fail);

    return 0;
}
