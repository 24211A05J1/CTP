#include <stdio.h>

int main() {
    float phy, che, bio, math, com;
    float total, percentage;

    printf("Enter marks for phy: ");
    scanf("%f", &phy);
    printf("Enter marks for che: ");
    scanf("%f", &che);
    printf("Enter marks for bio: ");
    scanf("%f", &bio);
    printf("Enter marks for math: ");
    scanf("%f", &math);
    printf("Enter marks for com: ");
    scanf("%f", &com);
    total = phy + che + bio + math + com;
    percentage = (total / 500) * 100;

    printf("Total Marks: %f\n", total);
    printf("Percentage: %f\n", percentage);

    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 70) {
        printf("Grade: C\n");
    } else if (percentage >= 60) {
        printf("Grade: D\n");
    } else if (percentage >= 40) {
        printf("Grade: E\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
