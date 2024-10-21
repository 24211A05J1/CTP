#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 <= 0 || side2 <= 0 || side3 <= 0 ||
        (side1 + side2 <= side3) ||
        (side1 + side3 <= side2) ||
        (side2 + side3 <= side1)) {
        printf("The sides do not form a valid triangle\n");
    } else {
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is equilateral\n");
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("The triangle is isosceles\n");
        } else {
            printf("The triangle is scalene\n");
        }
    }

    return 0;
}
