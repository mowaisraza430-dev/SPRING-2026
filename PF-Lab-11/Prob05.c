#include <stdio.h>
#include <string.h>

// Department structure
struct Department {
    char deptCode[10];
    char deptName[50];
};

// Course structure with nested Department
struct Course {
    char courseCode[10];
    char courseName[60];
    int creditHours;
    struct Department dept;   // nested structure
};

// Function to display all courses of a specific department
void showByDepartment(struct Course c[], int n, char code[]) {
    int i, found = 0;

    printf("\n--- Courses in Department %s ---\n", code);

    for (i = 0; i < n; i++) {
        if (strcmp(c[i].dept.deptCode, code) == 0) {
            printf("\nCourse Code   : %s\n", c[i].courseCode);
            printf("Course Name   : %s\n", c[i].courseName);
            printf("Credit Hours  : %d\n", c[i].creditHours);
            printf("Department    : %s (%s)\n",
                   c[i].dept.deptName, c[i].dept.deptCode);
            found = 1;
        }
    }

    if (!found) {
        printf("No courses found for this department.\n");
    }
}

int main() {
    struct Course c[3];
    int i;
    char searchCode[10];

    // Input for 3 courses
    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Course %d\n", i + 1);

        printf("Course Code: ");
        scanf("%s", c[i].courseCode);

        printf("Course Name: ");
        scanf(" %[^\n]", c[i].courseName);

        printf("Credit Hours: ");
        scanf("%d", &c[i].creditHours);

        printf("Department Code: ");
        scanf("%s", c[i].dept.deptCode);

        printf("Department Name: ");
        scanf(" %[^\n]", c[i].dept.deptName);
    }

    // Display all courses
    printf("\n--- All Courses ---\n");
    for (i = 0; i < 3; i++) {
        printf("\nCourse Code   : %s\n", c[i].courseCode);
        printf("Course Name   : %s\n", c[i].courseName);
        printf("Credit Hours  : %d\n", c[i].creditHours);
        printf("Department    : %s (%s)\n",
               c[i].dept.deptName, c[i].dept.deptCode);
    }

    // Search by department
    printf("\nEnter Department Code to search: ");
    scanf("%s", searchCode);

    showByDepartment(c, 3, searchCode);

    return 0;
}
