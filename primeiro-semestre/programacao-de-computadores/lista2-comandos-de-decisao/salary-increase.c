#include <stdio.h>
#include <stdbool.h>


int main() {

    float salary, newSalary, amount;
    int percentage;

    scanf("%f", &salary);

    if (salary >= 0 && salary <= 400) {
        percentage = 15;
        amount = (salary * percentage) / 100;
        newSalary = amount + salary;
    } else if (salary >= 400 && salary <= 800) {
        percentage = 12;
        amount = (salary * percentage) / 100;
        newSalary = amount + salary;
    } else if (salary >= 800 && salary <= 1200) {
        percentage = 10;
        amount = (salary * percentage) / 100;
        newSalary = amount + salary;
    } else if (salary >= 1200 && salary <= 2000) {
        percentage = 7;
        amount = (salary * percentage) / 100;
        newSalary = amount + salary;
    } else {
        percentage = 4;
        amount = (salary * percentage) / 100;
        newSalary = amount + salary;
    }

    printf("Novo salario: %.2f\n", newSalary);
    printf("Reajuste ganho: %.2f\n", amount);
    printf("Em percentual: %d %\n", percentage);

    return 0;
}
