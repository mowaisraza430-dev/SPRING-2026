#include <stdio.h>
#include <string.h>

// Structure for Order
struct Order {
    int orderID;
    char customerName[50];
    char productName[50];
    int quantity;
    float unitPrice;
    char status[20];
};

// Function to compute total bill for one order
float computeTotal(struct Order o) {
    return o.quantity * o.unitPrice;
}

// Function to filter orders by status
void filterByStatus(struct Order orders[], int n, char status[]) {
    int i, found = 0;

    printf("\n--- Orders with status: %s ---\n", status);

    for (i = 0; i < n; i++) {
        if (strcmp(orders[i].status, status) == 0) {
            printf("\nOrder ID      : %d\n", orders[i].orderID);
            printf("Customer Name : %s\n", orders[i].customerName);
            printf("Product Name  : %s\n", orders[i].productName);
            printf("Quantity      : %d\n", orders[i].quantity);
            printf("Unit Price    : %.2f\n", orders[i].unitPrice);
            printf("Total Bill    : %.2f\n",
                   computeTotal(orders[i]));
            printf("Status        : %s\n", orders[i].status);

            found = 1;
        }
    }

    if (!found) {
        printf("No orders found with this status.\n");
    }
}

int main() {
    struct Order orders[4];
    int i;
    char searchStatus[20];

    // Input 4 orders
    for (i = 0; i < 4; i++) {
        printf("\nEnter details for Order %d\n", i + 1);

        printf("Order ID: ");
        scanf("%d", &orders[i].orderID);

        printf("Customer Name: ");
        scanf(" %[^\n]", orders[i].customerName);

        printf("Product Name: ");
        scanf(" %[^\n]", orders[i].productName);

        printf("Quantity: ");
        scanf("%d", &orders[i].quantity);

        printf("Unit Price: ");
        scanf("%f", &orders[i].unitPrice);

        printf("Status (Pending/Shipped/Delivered): ");
        scanf("%s", orders[i].status);
    }

    // Display all orders with totals
    printf("\n--- All Orders ---\n");

    for (i = 0; i < 4; i++) {
        printf("\nOrder ID      : %d\n", orders[i].orderID);
        printf("Customer Name : %s\n", orders[i].customerName);
        printf("Product Name  : %s\n", orders[i].productName);
        printf("Quantity      : %d\n", orders[i].quantity);
        printf("Unit Price    : %.2f\n", orders[i].unitPrice);
        printf("Total Bill    : %.2f\n",
               computeTotal(orders[i]));
        printf("Status        : %s\n", orders[i].status);
    }

    // Filter by status
    printf("\nEnter status to filter (Pending/Shipped/Delivered): ");
    scanf("%s", searchStatus);

    filterByStatus(orders, 4, searchStatus);

    return 0;
}
