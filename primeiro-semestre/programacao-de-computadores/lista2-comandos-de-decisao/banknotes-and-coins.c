#include <stdio.h>

int main() {
float valor;
scanf("%f", &valor);

int n = (int)(valor * 100 + 0.5);

int notas100 = n / 10000; n %= 10000;
int notas50 = n / 5000; n %= 5000;
int notas20 = n / 2000; n %= 2000;
int notas10 = n / 1000; n %= 1000;
int notas5 = n / 500; n %= 500;
int notas2 = n / 200; n %= 200;
int moedas1 = n / 100; n %= 100;
int moedas050 = n / 50; n %= 50;
int moedas025 = n / 25; n %= 25;
int moedas010 = n / 10; n %= 10;
int moedas005 = n / 5; n %= 5;
int moedas001 = n;

printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n", notas100);
printf("%d nota(s) de R$ 50.00\n", notas50);
printf("%d nota(s) de R$ 20.00\n", notas20);
printf("%d nota(s) de R$ 10.00\n", notas10);
printf("%d nota(s) de R$ 5.00\n", notas5);
printf("%d nota(s) de R$ 2.00\n", notas2);

printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n", moedas1);
printf("%d moeda(s) de R$ 0.50\n", moedas050);
printf("%d moeda(s) de R$ 0.25\n", moedas025);
printf("%d moeda(s) de R$ 0.10\n", moedas010);
printf("%d moeda(s) de R$ 0.05\n", moedas005);
printf("%d moeda(s) de R$ 0.01\n", moedas001);

return 0;
}