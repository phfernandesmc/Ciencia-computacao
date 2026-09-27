#include <stdio.h>

void fib_sequencia(int n) {
    long long tabela[n + 2];
    tabela[0] = 0;
    tabela[1] = 1;
    for (int i = 2; i <= n; i++) {
        tabela[i] = tabela[i - 1] + tabela[i - 2];
    }
    for (int i = 0; i <= n; i++) {
        printf(i == 0 ? "%lld" : " %lld", tabela[i]);
    }
    printf("\n");
}

int main(void) {
    int n;
    scanf("%d", &n);
    fib_sequencia(n);
    return 0;
}
