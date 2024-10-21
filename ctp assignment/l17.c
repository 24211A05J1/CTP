#include <stdio.h>

int main() {
    int num, c, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    c = num; 
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    if (c == rev) {
        printf("%d is a palindrome\n", c);
    } else {
        printf("%d is not a palindrome\n", c);
    }

    return 0;
}
