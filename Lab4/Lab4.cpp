#include <stdio.h>

int main() {
    int id;
    float hours, rate, total;

    printf("Enter employee ID: ");
    scanf("%d", &id);

    printf("Enter hours worked: ");
    scanf("%f", &hours);

    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    total = hours * rate;

    printf("Employee ID: %d\n", id);
    printf("Total Income: %.2f\n", total);

    return 0;
}