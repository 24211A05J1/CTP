#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a natural number (n): ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        sum += i; 
    }

    printf("The sum of even numbers from 1 to %d is: %d\n", n, sum);
    
    return 0; 
}
