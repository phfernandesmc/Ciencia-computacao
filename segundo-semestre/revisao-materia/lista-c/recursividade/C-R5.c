#include <stdio.h>

long long chamadas;

long long fib(int n) {
    chamadas++;
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(void) {
    int n;
    scanf("%d", &n);
    long long resultado = fib(n);
    printf("Fib(%d) = %lld\n", n, resultado);
    printf("Chamadas: %lld\n", chamadas);
    return 0;
}
