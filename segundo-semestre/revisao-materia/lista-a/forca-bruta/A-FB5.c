#include <stdio.h>

int mochila_rec(int p[], int v[], int c, int n, int item) {
    if (item >= n || c == 0) {
        return 0;
    }
    if (p[item] > c) {
        return mochila_rec(p, v, c, n, item + 1);
    }
    int coloca = v[item] + mochila_rec(p, v, c - p[item], n, item + 1);
    int nao_coloca = mochila_rec(p, v, c, n, item + 1);
    return coloca > nao_coloca ? coloca : nao_coloca;
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
    printf("Valor maximo: %d\n", mochila_rec(p, v, c, n, 0));
    return 0;
}
