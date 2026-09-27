#include <stdio.h>

int mochila_pd(int p[], int v[], int c, int n) {
    int M[n + 1][c + 1];
    for (int j = 0; j <= c; j++) {
        M[0][j] = 0;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= c; j++) {
            if (p[i - 1] > j) {
                M[i][j] = M[i - 1][j];
            } else {
                int com = v[i - 1] + M[i - 1][j - p[i - 1]];
                M[i][j] = M[i - 1][j] > com ? M[i - 1][j] : com;
            }
        }
    }
    return M[n][c];
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
    printf("Valor maximo: %d\n", mochila_pd(p, v, c, n));
    return 0;
}
