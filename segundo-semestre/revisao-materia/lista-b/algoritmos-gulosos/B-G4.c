#include <stdio.h>

typedef struct {
    int inicio;
    int fim;
} intervalo;

void escalonamento_rec(intervalo evento[], int e, int d) {
    int i = e + 1;
    while (i <= d && evento[i].inicio <= evento[e].fim) {
        i++;
    }
    if (i > d) {
        return;
    }
    printf("(%d,%d)\n", evento[i].inicio, evento[i].fim);
    escalonamento_rec(evento, i, d);
}

int main(void) {
    int n;
    scanf("%d", &n);
    intervalo evento[n + 1];
    evento[0].inicio = 0;
    evento[0].fim = 0;
    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &evento[i].inicio, &evento[i].fim);
    }
    for (int i = 2; i <= n; i++) {
        intervalo aux = evento[i];
        int j = i - 1;
        while (j >= 1 && (evento[j].fim > aux.fim ||
                          (evento[j].fim == aux.fim && evento[j].inicio > aux.inicio))) {
            evento[j + 1] = evento[j];
            j--;
        }
        evento[j + 1] = aux;
    }
    escalonamento_rec(evento, 0, n);
    return 0;
}
