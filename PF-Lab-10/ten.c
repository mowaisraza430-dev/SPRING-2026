#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;
    char name[50];
    int s1, s2, s3;
    float avg;
    char status[10];

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter 3 subject scores: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    avg = (s1 + s2 + s3) / 3.0;

    if (avg >= 50)
        strcpy(status, "Pass");
    else
        strcpy(status, "Fail");

    fptr = fopen("report.txt", "w+");

    if (fptr == NULL) {
        printf("Error: File cannot be opened\n");
        return 0;
    }

    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Subject 1: %d\n", s1);
    fprintf(fptr, "Subject 2: %d\n", s2);
    fprintf(fptr, "Subject 3: %d\n", s3);
    fprintf(fptr, "Average: %.2f\n", avg);
    fprintf(fptr, "Status: %s\n", status);

    rewind(fptr);

    printf("\n--- Report Card ---\n");

    char line[100];
    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }

    fclose(fptr);

    return 0;
}
