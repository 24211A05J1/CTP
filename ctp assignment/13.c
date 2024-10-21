#include <stdio.h>

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    int count100 = amount / 100;
    amount %= 100;

    int count50 = amount / 50;
    amount %= 50;

    int count20 = amount / 20;
    amount %= 20;

    int count10 = amount / 10;
    amount %= 10;

    int count5 = amount / 5;
    amount %= 5;

    int count1 = amount; 

    int totalNotes = count100 + count50 + count20 + count10 + count5 + count1;

    printf("Total number of notes: %d\n", totalNotes);
    if (count100 > 0) printf("Notes of 100: %d\n", count100);
    if (count50 > 0) printf("Notes of 50: %d\n", count50);
    if (count20 > 0) printf("Notes of 20: %d\n", count20);
    if (count10 > 0) printf("Notes of 10: %d\n", count10);
    if (count5 > 0) printf("Notes of 5: %d\n", count5);
    if (count1 > 0) printf("Notes of 1: %d\n", count1);

    return 0;
}
