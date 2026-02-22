#include <stdio.h>

int main() {
    int category, type, quantity;
    int price = 0;

    printf("Select Book Category:\n");
    printf("1. Fiction\n");
    printf("2. Non-Fiction\n");
    scanf("%d", &category);

    switch (category) {

        case 1: // Fiction
            printf("Select Fiction Book Type:\n");
            printf("1. Novel (Rs. 600)\n");
            printf("2. Comic (Rs. 300)\n");
            scanf("%d", &type);

            switch (type) {
                case 1:
                    price = 600;
                    printf("Selected Book: Novel\n");
                    break;
                case 2:
                    price = 300;
                    printf("Selected Book: Comic\n");
                    break;
                default:
                    printf("Invalid Fiction Book Type\n");
                    return 0;
            }
            break;

        case 2: // Non-Fiction
            printf("Select Non-Fiction Book Type:\n");
            printf("1. Biography (Rs. 800)\n");
            printf("2. Self-Help (Rs. 500)\n");
            scanf("%d", &type);

            switch (type) {
                case 1:
                    price = 800;
                    printf("Selected Book: Biography\n");
                    break;
                case 2:
                    price = 500;
                    printf("Selected Book: Self-Help\n");
                    break;
                default:
                    printf("Invalid Non-Fiction Book Type\n");
                    return 0;
            }
            break;

        default:
            printf("Invalid Book Category\n");
            return 0;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Total Bill Amount: Rs. %d\n", price * quantity);

    return 0;
}
