#include <stdio.h>
int main()
 
 { 
    float data_used;
    float rate, total_bill;
    int customer_type;  
    
    printf("Enter data used : ");
    scanf("%f", &data_used);
    
    printf("Enter customer type (1 == Prepaid, 2 == Postpaid): ");
    scanf("%d", &customer_type);
    
    if (data_used <= 2) {
        rate = 50;
    }
    else if (data_used > 2 && data_used <= 10) {
        
        if (customer_type == 1) {
            rate = 40;
        }
        else if (customer_type == 2) {
            rate = 35;
        }
        else {
            printf("Invalid  type.\n");
            return 0;
        }
    }
    else {   
        rate = 25;
    }
    
    total_bill = data_used * rate;
    
    printf("Your Total Mobile Data Bill = Rs. %.2f\n", total_bill);
    
    return 0;
}
