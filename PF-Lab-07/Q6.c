#include <stdio.h>

int main() {
    char word[100];
    int idx = 0, vowelCount = 0, consonantCount = 0;

    printf("Enter a word to analyze: ");
    scanf("%s", word);

    while(word[idx] != '\0') {
        if((word[idx] >= 'a' && word[idx] <= 'z') || (word[idx] >= 'A' && word[idx] <= 'Z')) {
            if(word[idx]=='a'||word[idx]=='e'||word[idx]=='i'||word[idx]=='o'||word[idx]=='u'||
               word[idx]=='A'||word[idx]=='E'||word[idx]=='I'||word[idx]=='O'||word[idx]=='U') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
        idx++;
    }

    printf("Number of vowels: %d\n", vowelCount);
    printf("Number of consonants: %d\n", consonantCount);

    return 0;
}
