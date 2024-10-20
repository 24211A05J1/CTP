#include <stdio.h>

int main() {
    int n;
    printf("Enter a natural number (n): ");
    scanf("%d", &n);

    while (n >= 1) {
        printf("%d ", n);
        n--; 
    }

    return 0; 
}
