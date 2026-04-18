#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("config.txt", "r");

    if (fptr == NULL) {
        printf("config.txt not found. Creating default configuration...\n");

        fptr = fopen("config.txt", "w");

        if (fptr == NULL) {
            printf("Error: File cannot be created\n");
            return 0;
        }

        fprintf(fptr, "max_users=50\n");
        fprintf(fptr, "timeout=30\n");
        fprintf(fptr, "mode=default\n");

        fclose(fptr);

        printf("Default config.txt created successfully\n");
    } 
    else {
        printf("config.txt found and opened successfully\n");
        fclose(fptr);
    }

    return 0;
}
