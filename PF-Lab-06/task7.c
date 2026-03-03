#include <stdio.h>

int main() {
    int choice;
    float num1, num2;

    do {
        printf("\n_______ Simple Calculator_______\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result = %.2f\n", num1 + num2);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result = %.2f\n", num1 - num2);
                break;

            case 3:
                printf("Program exiting....\n");
                break;

            default:
                printf("Please try again.Invalid choice!\n");
        }

    } while(choice != 3);

    return 0;
}
