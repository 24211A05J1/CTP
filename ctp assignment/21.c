#include <stdio.h>

int main() {
    float units, totalBill, surcharge;

    printf("Enter the number of units ");
    scanf("%f", &units);

    if (units <= 50) {
        totalBill = units * 0.50;
    } else if (units <= 150) {
        totalBill = (50 * 0.50) + ((units - 50) * 0.75);
    } else if (units <= 250) {
        totalBill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        totalBill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    if (totalBill > 0) {
        surcharge = 0.20 * totalBill; 
        totalBill += surcharge;    
    }

    printf("Total Electricity Bill: Rs. %f\n", totalBill);

    return 0;
}