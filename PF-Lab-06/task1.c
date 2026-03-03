#include <stdio.h>

int main() {
    
    int attendance;
    int totalPresent = 0;
int i;
    
    for(i = 1; i <= 30; i++) {
        printf("Enter attendance for student %d (1 = Present, 0 = Absent): ", i);
        scanf("%d", &attendance);

        
        if(attendance == 1) {
            totalPresent++;
        }
    }

    printf("\nTotal number of students present are: %d\n", totalPresent);

    return 0;
}
