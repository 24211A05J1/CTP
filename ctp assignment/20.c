#include <stdio.h>

int main() {
    float basicSalary, HRA, DA, grossSalary;

    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000) {
        HRA = 0.20 * basicSalary;
        DA = 0.80 * basicSalary; 
    } else if (basicSalary <= 20000) {
        HRA = 0.25 * basicSalary; 
        DA = 0.90 * basicSalary;  
    } else {
        HRA = 0.30 * basicSalary; 
        DA = 0.95 * basicSalary; 
    }
    grossSalary = basicSalary + HRA + DA;

    printf("Basic Salary: %f\n", basicSalary);
    printf("HRA: %f\n", HRA);
    printf("DA: %f\n", DA);
    printf("Gross Salary: %f\n", grossSalary);

    return 0;
}
