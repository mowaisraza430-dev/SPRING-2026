#include <stdio.h>

int main() {
    int password;
    int correctPassword = 1234;

    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password != correctPassword) {
            printf("Try again.Password is incorrect\n");
        }

    } while (password != correctPassword);

    printf("Access Granted!\n");

    return 0;
}
