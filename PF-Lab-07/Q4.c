#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') str[i] = str[i] - 'a' + 'A';
        else if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] - 'A' + 'a';
        i++;
    }

    printf("Converted message: %s\n", str);
    return 0;
}
