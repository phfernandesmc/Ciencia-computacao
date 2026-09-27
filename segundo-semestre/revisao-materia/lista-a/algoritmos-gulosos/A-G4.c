#include <stdio.h>

typedef struct {
    int inicio;
    int fim;
} intervalo;

void escalonamento(int n, intervalo evento[]) {
    for (int i = 1; i < n; i++) {
        intervalo aux = evento[i];
        int j = i - 1;
        while (j >= 0 && (evento[j].fim > aux.fim ||
                          (evento[j].fim == aux.fim && evento[j].inicio > aux.inicio))) {
            evento[j + 1] = evento[j];
            j--;
        }
        evento[j + 1] = aux;
    }
    if (n == 0) {
        return;
    }
    printf("(%d,%d)\n", evento[0].inicio, evento[0].fim);
    int ultimo = 0;
    for (int i = 1; i < n; i++) {
        if (evento[i].inicio > evento[ultimo].fim) {
            printf("(%d,%d)\n", evento[i].inicio, evento[i].fim);
            ultimo = i;
        }
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    intervalo evento[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &evento[i].inicio, &evento[i].fim);
    }
    escalonamento(n, evento);
    return 0;
}
