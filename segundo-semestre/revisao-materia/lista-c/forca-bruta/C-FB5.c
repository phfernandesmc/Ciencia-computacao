#include <stdio.h>

int mochila_iter(int p[], int v[], int c, int n) {
    int melhor = 0;
    for (int i = 0; i < (1 << n); i++) {
        int peso = 0, valor = 0;
        for (int j = 0; j < n; j++) {
            if ((i >> j) % 2 == 1) {
                peso += p[j];
                valor += v[j];
            }
        }
        if (peso <= c && valor > melhor) {
            melhor = valor;
        }
    }
    return melhor;
}

int main(void) {
    int c, n;
    scanf("%d %d", &c, &n);
    int p[n], v[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    printf("Valor maximo: %d\n", mochila_iter(p, v, c, n));
    return 0;
}
