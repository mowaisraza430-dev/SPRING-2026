#include <stdio.h>

int main() {
    double price, total = 0, finalAmount;
    int choice;

    printf("Welcome to the Our Online Shopping System!\n");

    do {
        
        printf("Enter the price of the product: ");
        scanf("%lf", &price);

        
        total += price;

        
        printf(" want to add another product? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while (choice == 1);  

    
    if (total > 5000) {
        finalAmount = total * 0.95; 
        printf("Congrats! You have received a 5 Percent discount!\n");
    } else {
        finalAmount = total;
    }

    
    printf("Total bill amount: %.2lf\n", total);
    printf("Final payable amount: %.2lf\n", finalAmount);

    printf("Thank you for shopping with us!\n");

    return 0;
}
