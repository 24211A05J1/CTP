#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a n: ");
    scanf("%d", &n);
    
    int i = 1; 
    while (i <= n) {
        sum += i; 
        i++; 
    }

    printf("The sum of natural numbers from 1 to %d is: %d\n", n, sum);
    
    return 0;
}
