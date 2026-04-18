#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char copy[100];
    char formatted[150] = "Email: ";

    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    strcpy(copy, email);

    char *atPtr = strchr(copy, '@');

    if (atPtr == NULL) {
        printf("Invalid email: '@' not found\n");
        return 0;
    }

    char *domain = atPtr + 1;

    if (strstr(domain, ".") == NULL) {
        printf("Invalid email: domain must contain '.'\n");
        return 0;
    }

    printf("Domain: %s\n", domain);

    strcat(formatted, copy);

    printf("%s\n", formatted);

    return 0;
}
