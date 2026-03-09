#include <stdio.h>

int main() {
    int numbers[10];
    int i, search, count = 0;

    
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    
    printf("Enter the number to search: ");
    scanf("%d", &search);

    
    for (i = 0; i < 10; i++) {
        if (numbers[i] == search) {
            count++;
        }
    }

    
    if (count > 0) {
        printf("The number %d occurred %d time(s) in the array.\n", search, count);
    } else {
        printf("Number not found.\n");
    }

    return 0;
}
