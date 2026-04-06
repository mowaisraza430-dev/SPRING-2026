#include <stdio.h>

float applyDiscount(float price, int tier);
void printInvoice(float original, float discounted);

int main() {
    float price, discounted;
    int tier;

    printf("Enter original price: ");
    scanf("%f", &price);

    printf("Enter membership tier (1=Bronze, 2=Silver, 3=Gold, 4=Platinum): ");
    scanf("%d", &tier);

    discounted = applyDiscount(price, tier);

    printInvoice(price, discounted);

    return 0;
}

float applyDiscount(float price, int tier) {
    if (tier == 1)
        return price - (price * 0.05);
    else if (tier == 2)
        return price - (price * 0.10);
    else if (tier == 3)
        return price - (price * 0.20);
    else if (tier == 4)
        return price - (price * 0.30);
    else
        return price;
}

void printInvoice(float original, float discounted) {
    float discountAmount = original - discounted;
    float delivery = 0.0;

    if (discounted < 2000)
        delivery = 150;

    float total = discounted + delivery;

    printf("\n----- Invoice -----\n");
    printf("Original Price: Rs. %.2f\n", original);
    printf("Discount: Rs. %.2f\n", discountAmount);
    printf("Price after Discount: Rs. %.2f\n", discounted);
    printf("Delivery Charges: Rs. %.2f\n", delivery);
    printf("Final Total: Rs. %.2f\n", total);
}
