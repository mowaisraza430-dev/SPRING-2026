#include <stdio.h>

int main() {
    int mainType, subType;
    float weight, rate = 0, totalFee;

    printf("Select Main Luggage Type:\n");
    printf("1. Handbag\n");
    printf("2. Checked Bag\n");
    printf("3. Sports Equipment\n");
    scanf("%d", &mainType);

    printf("Enter luggage weight : ");
    scanf("%f", &weight);

    switch (mainType) {

        case 1: // choose Handbag type
            printf("Select Handbag Type:\n");
            printf("1. Small\n");
            printf("2. Large\n");
            scanf("%d", &subType);

            switch (subType) {
                case 1:
                    rate = 100;
                    break;
                case 2:
                    rate = 200;
                    break;
                default:
                    printf("Invalid Handbag Type\n");
                    return 0;
            }
            break;

        case 2: // Choose Checked Bag type
            printf("Select Checked Bag Type:\n");
            printf("1. Domestic\n");
            printf("2. International\n");
            scanf("%d", &subType);

            switch (subType) {
                case 1:
                    rate = 300;
                    break;
                case 2:
                    rate = 500;
                    break;
                default:
                    printf("Invalid Checked Bag Type\n");
                    return 0;
            }
            break;

        case 3: 
            rate = 1000;
            break;

        default:
            printf("Invalid Main Luggage Type\n");
            return 0;
    }

    totalFee = rate * weight;
    printf("Total Luggage Fee: Rs. %.2f\n", totalFee);

    return 0;
}
