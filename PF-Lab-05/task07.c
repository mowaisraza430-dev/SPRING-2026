#include <stdio.h>

int main() {
    int enteredCard, enteredPIN, correctCard = 7860, correctPIN = 5550;
    float amount, balance = 200000.0;

    printf("Enter Card Number: ");
    scanf("%d", &enteredCard);

    
    if (enteredCard == correctCard) {

        printf("Enter PIN: ");
        scanf("%d", &enteredPIN);

        
        if (enteredPIN == correctPIN) {

            printf("Enter Transaction Amount: ");
            scanf("%f", &amount);

            
            if (amount <= balance && amount > 0) {
                printf("Transaction Successful\n");
                printf("Remaining Balance: Rs. %.2f\n", balance - amount);
            }
            else if (amount > balance) {
                printf("Insufficient Funds\n");
            }
            else {
                printf("Invalid Transaction Amount\n");
            }

        } else {
            printf("Invalid PIN\n");
        }

    } else {
        printf("Invalid Card\n");
    }

    return 0;
}
