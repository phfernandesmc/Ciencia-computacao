#include <stdio.h>

int main(void) {
    int c, n;
    scanf("%d %d", &c, &n);
    int p[n + 1], v[n + 1];
    for (int i = 1; i <= n; i++) {
        scanf("%d", &p[i]);
    }
    for (int i = 1; i <= n; i++) {
        scanf("%d", &v[i]);
    }
    int M[n + 1][c + 1];
    for (int j = 0; j <= c; j++) {
        M[0][j] = 0;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= c; j++) {
            if (p[i] > j) {
                M[i][j] = M[i - 1][j];
            } else {
                int com = v[i] + M[i - 1][j - p[i]];
                M[i][j] = M[i - 1][j] > com ? M[i - 1][j] : com;
            }
        }
    }
    printf("Valor maximo: %d\n", M[n][c]);
    int escolhido[n + 1];
    int qtd = 0;
    int cap = c;
    for (int i = n; i >= 1; i--) {
        if (M[i][cap] != M[i - 1][cap]) {
            escolhido[qtd++] = i;
            cap -= p[i];
        }
    }
    printf("Itens:");
    for (int k = qtd - 1; k >= 0; k--) {
        printf(" %d", escolhido[k]);
    }
    printf("\n");
    return 0;
}
