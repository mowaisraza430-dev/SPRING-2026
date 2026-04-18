#include <stdio.h>
#include <string.h>

int main() {
    char storedPassword[] = "admin";
    char input[100];
    int attempts;

    for (attempts = 1; attempts <= 3; attempts++) {
        printf("Enter password: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';

        if (strlen(input) == 0) {
            printf("Password cannot be empty\n");
            attempts--;
            continue;
        }

        int result = strcmp(input, storedPassword);

        if (result == 0) {
            printf("Access Granted\n");
            return 0;
        } else {
            if (result < 0) {
                printf("Entered password is alphabetically before the stored password\n");
            } else {
                printf("Entered password is alphabetically after the stored password\n");
            }

            if (attempts == 2) {
                if (strncmp(input, storedPassword, 3) == 0) {
                    printf("Hint: First 3 characters match\n");
                } else {
                    printf("Hint: First 3 characters do not match\n");
                }
            }
        }
    }

    printf("Account locked after 3 failed attempts\n");
    return 0;
}
