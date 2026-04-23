#include <stdio.h>
#include <ctype.h>  // for isupper() and isdigit()

// Using Recursive function to count uppercase letters and digits
void countChars(char *str, int *upperCount, int *digitCount) {
    
    // Base case: end of string
    if (*str == '\0')
        return;

    // Check current character
    if (isupper(*str))
        (*upperCount)++;

    if (isdigit(*str))
        (*digitCount)++;

    // Recursive call for next character
    countChars(str + 1, upperCount, digitCount);
}

int main() {
    char password[100];
    int upperCount = 0, digitCount = 0;

    printf("Enter password: ");
    scanf("%s", password);

    countChars(password, &upperCount, &digitCount);

    printf("Uppercase letters: %d\n", upperCount);
    printf("Digits: %d\n", digitCount);

    return 0;
}
