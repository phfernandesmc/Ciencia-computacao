#include <stdio.h>

long long tabela[93];

long long fib_topdown(int n) {
    if (n <= 1) {
        return n;
    }
    if (tabela[n] != -1) {
        return tabela[n];
    }
    tabela[n] = fib_topdown(n - 1) + fib_topdown(n - 2);
    return tabela[n];
}

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 93; i++) {
        tabela[i] = -1;
    }
    printf("Fib(%d) = %lld\n", n, fib_topdown(n));
    return 0;
}
