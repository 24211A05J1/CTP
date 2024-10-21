#include <stdio.h>

int main() {
    float cp, sp, profitLoss;

    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);

    profitLoss = sp - cp;

    if (profitLoss > 0) {
        printf("Profit: %.2f\n", profitLoss);
    } else if (profitLoss < 0) {
        printf("Loss: %.2f\n", -profitLoss);
    } else {
        printf("No profit, no loss\n");
    }

    return 0;
}
