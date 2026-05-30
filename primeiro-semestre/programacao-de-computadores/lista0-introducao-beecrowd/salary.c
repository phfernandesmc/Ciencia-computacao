#include <stdio.h>
 
int main() {
    int number, workedHours;
    float amountPerHour;

    scanf("%d %d %f", &number, &workedHours, &amountPerHour);

    const float salary = workedHours * amountPerHour;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);
    return 0;
}