#include <stdio.h>

int main() {
    FILE *fptr;
    char product[50];
    int quantity;

    fptr = fopen("inventory.txt", "a");

    if (fptr == NULL) {
        printf("Error: File cannot be opened\n");
        return 0;
    }

    printf("Enter product name: ");
    scanf("%s", product);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    fprintf(fptr, "%s %d\n", product, quantity);

    fclose(fptr);

    fptr = fopen("inventory.txt", "r");

    if (fptr == NULL) {
        printf("Error: File cannot be opened\n");
        return 0;
    }

    printf("\nInventory Records:\n");

    while (fscanf(fptr, "%s %d", product, &quantity) == 2) {
        printf("%s %d\n", product, quantity);
    }

    fclose(fptr);

    return 0;
}
