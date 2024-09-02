#include <stdio.h>

int main() {
    double income, tax = 0;

    // Input income from the user
    printf("Enter your annual income: ");
    scanf("%lf", &income);

    // Calculate tax based on the income slabs
    if (income <= 250000) {
        tax = 0;
    } else if (income > 250000 && income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if (income > 500000 && income <= 1000000) {
        tax = (250000 * 0.05) + (income - 500000) * 0.20;
    } else if (income > 1000000) {
        tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;
    }

    // Output the calculated tax
    printf("The income tax to be paid is: %.2lf\n", tax);

    return 0;
}
