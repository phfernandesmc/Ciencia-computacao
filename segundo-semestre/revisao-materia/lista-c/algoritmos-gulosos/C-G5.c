#include <stdio.h>

typedef struct {
    int inicio;
    int fim;
} reserva;

int main(void) {
    int n;
    scanf("%d", &n);
    reserva r[n];
    for (int i = 0; i < n; i++) {
        int h1, m1, h2, m2;
        scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);
        r[i].inicio = h1 * 60 + m1;
        r[i].fim = h2 * 60 + m2;
    }
    for (int i = 1; i < n; i++) {
        reserva aux = r[i];
        int j = i - 1;
        while (j >= 0 && r[j].fim > aux.fim) {
            r[j + 1] = r[j];
            j--;
        }
        r[j + 1] = aux;
    }
    int total = 0;
    int ultimo_fim = -1;
    for (int i = 0; i < n; i++) {
        if (r[i].inicio >= ultimo_fim) {
            total++;
            ultimo_fim = r[i].fim;
        }
    }
    printf("%d\n", total);
    return 0;
}
