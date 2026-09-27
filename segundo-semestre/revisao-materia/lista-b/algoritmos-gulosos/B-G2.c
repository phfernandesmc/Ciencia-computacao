#include <stdio.h>
#include <stdbool.h>

bool pode_pagar(int valor, int notas[], int n) {
    for (int i = 0; i < n; i++) {
        valor -= (valor / notas[i]) * notas[i];
    }
    return valor == 0;
}

int main(void) {
    int valor, n;
    scanf("%d %d", &valor, &n);
    int notas[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &notas[i]);
    }
    printf(pode_pagar(valor, notas, n) ? "Possivel\n" : "Impossivel\n");
    return 0;
}
