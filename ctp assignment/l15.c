#include <stdio.h>

int main() {
    int n, product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        product = 0; 
    } else {
        while (n > 0) {
            product *= n % 10; 
            n /= 10;        
        }
    }
    printf("Product of the digits: %d\n", product);
    
    return 0; 
}
