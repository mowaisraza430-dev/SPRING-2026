#include <stdio.h>

int main() {
    float balance, withdrawal;

   
    printf("Enter your initial balance: ");
    scanf("%f", &balance);

    
    while (balance > 0) {
        printf("\nYour Current Balance is: %.2f", balance);
        printf("\nEnter your withdrawal amount: ");
        scanf("%f", &withdrawal);

        balance = balance - withdrawal;

        if (balance > 0) {
            printf("Withdrawal done\n");
        } else {
            printf("Balance exhausted.\n");
        }
    }

    printf("\nFinal Balance Left: %.2f\n", balance);

    return 0;
}
