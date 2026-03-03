#include <stdio.h>

int main() {
    int totalSeats = 40;    
    int bookedSeats = 0;   
    int choice;

    printf("Welcome to  Bus Seat Reservation System!\n");

    while (bookedSeats < totalSeats) {
        printf("\nwant to book a seat? (1 = Yes, 0 = Stop): ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Reservation process stopped .\n");
            break;  
        } else if (choice == 1) {
            bookedSeats++;  
            printf("Seat booked successfully.\n");
            printf("Remaining seats: %d\n", totalSeats - bookedSeats);
        } else {
            printf("Your choice is invalid! Please enter 1 (Yes) or 0 (Stop).\n");
        }

        
        if (bookedSeats == totalSeats) {
            printf("\nAll seats are booked. No more reservations possible.\n");
            break;
        }
    }

    printf("\nTotal seats booked: %d\n", bookedSeats);
    printf("Remaining seats: %d\n", totalSeats - bookedSeats);
    printf("Thank you for using Our Bus Seat Reservation System!\n");

    return 0;
}
