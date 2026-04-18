#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i, isValid = 1;

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    int length = strlen(name);

    if (length < 3 || length > 20) {
        isValid = 0;
    }

    if (name[0] == ' ' || name[length - 1] == ' ') {
        isValid = 0;
    }

    for (i = 0; i < length; i++) {
        if (isdigit(name[i])) {
            isValid = 0;
            break;
        }
    }

    if (isValid) {
        printf("Valid Name\n");
    } else {
        printf("Invalid Name\n");
    }

    printf("Length: %d\n", length);

    return 0;
}
