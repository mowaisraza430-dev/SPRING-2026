#include <stdio.h>
#include <stdlib.h>

int main() {
    int *contacts;
    int i;

    contacts = (int *)malloc(3 * sizeof(int));

    if (contacts == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        printf("Enter contact ID %d: ", i + 1);
        scanf("%d", &contacts[i]);
    }

    contacts = (int *)realloc(contacts, 5 * sizeof(int));

    if (contacts == NULL) {
        printf("Reallocation failed\n");
        return 1;
    }

    for (i = 3; i < 5; i++) {
        printf("Enter contact ID %d: ", i + 1);
        scanf("%d", &contacts[i]);
    }

    printf("\nUpdated Contact List:\n");
    for (i = 0; i < 5; i++) {
        printf("Contact %d: %d\n", i + 1, contacts[i]);
    }

    free(contacts);
    contacts = NULL;

    return 0;
}
