#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a natural number (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        sum += i; 
    }

    printf("The sum of odd numbers from 1 to %d is: %d\n", n, sum);
    
    return 0;
}
