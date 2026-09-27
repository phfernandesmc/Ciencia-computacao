#include <stdio.h>

long long fib_bottomup(int n) {
    long long tabela[n + 2];
    tabela[0] = 0;
    tabela[1] = 1;
    for (int i = 2; i <= n; i++) {
        tabela[i] = tabela[i - 1] + tabela[i - 2];
    }
    return tabela[n];
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("Fib(%d) = %lld\n", n, fib_bottomup(n));
    return 0;
}
