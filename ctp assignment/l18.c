#include <stdio.h>

int main() {
    int num, digit, temp, count;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for (digit = 0; digit <= 9; digit++) {
        count = 0; 
        temp = num; 

        while (temp > 0) {
            if (temp % 10 == digit) {
                count++; 
            }
            temp /= 10;
        }

        if (count > 0) {
            printf("Digit %d: %d times\n", digit, count);
        }
    }

    return 0; 
}
