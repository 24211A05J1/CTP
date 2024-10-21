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
    int temp;
    temp=lastDigit;
    lastDigit=firstDigit;
    firstDigit=temp;

    printf("firstdigit=%d,lastdigit=%d",firstDigit,lastDigit);
    
    return 0; 
}