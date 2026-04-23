#include <stdio.h>
#include <string.h>

// Structure definition for Patient
struct Patient {
    char name[50];
    int age;
    char bloodType[5];
    int patientID;
    char diagnosis[100];
};

// Function to display all patient records
void displayAll(struct Patient p[], int n) {
    int i;

    printf("\n--- Patient Records ---\n");

    for (i = 0; i < n; i++) {
        printf("\nPatient %d\n", i + 1);
        printf("Name       : %s\n", p[i].name);
        printf("Age        : %d\n", p[i].age);
        printf("Blood Type : %s\n", p[i].bloodType);
        printf("Patient ID : %d\n", p[i].patientID);
        printf("Diagnosis  : %s\n", p[i].diagnosis);
    }
}

// Function to search patient by ID
void searchByID(struct Patient p[], int n, int id) {
    int i, found = 0;

    for (i = 0; i < n; i++) {
        if (p[i].patientID == id) {
            printf("\n--- Patient Found ---\n");
            printf("Name       : %s\n", p[i].name);
            printf("Age        : %d\n", p[i].age);
            printf("Blood Type : %s\n", p[i].bloodType);
            printf("Patient ID : %d\n", p[i].patientID);
            printf("Diagnosis  : %s\n", p[i].diagnosis);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nPatient not found.\n");
    }
}

int main() {
    struct Patient p[5];
    int i, searchID;

    for (i = 0; i < 5; i++) {

        printf("\nEnter details for Patient %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", p[i].name);   // reads full line

        printf("Age: ");
        scanf("%d", &p[i].age);

        printf("Blood Type: ");
        scanf("%s", p[i].bloodType);

        printf("Patient ID: ");
        scanf("%d", &p[i].patientID);

        getchar(); // flush newline

        printf("Diagnosis: ");
        scanf(" %[^\n]", p[i].diagnosis);
    }

    displayAll(p, 5);

    printf("\nEnter Patient ID to search: ");
    scanf("%d", &searchID);

    searchByID(p, 5, searchID);

    return 0;
}
