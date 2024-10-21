#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int lastDigit = num % 10;

    while (num >= 10) {
        num /= 10; 
    }
    int firstDigit = num;
    int sum = firstDigit + lastDigit;

    printf("Sum of the first and last digit: %d\n", sum);
    
    return 0; 
}
