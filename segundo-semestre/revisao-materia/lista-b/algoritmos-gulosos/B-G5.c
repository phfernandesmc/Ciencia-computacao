#include <stdio.h>

typedef struct {
    int inicio;
    int fim;
    char texto_inicio[8];
    char texto_fim[8];
} reserva;

int minutos(const char *hhmm) {
    int h, m;
    sscanf(hhmm, "%d:%d", &h, &m);
    return h * 60 + m;
}

int main(void) {
    int n;
    scanf("%d", &n);
    reserva r[n];
    for (int i = 0; i < n; i++) {
        scanf("%7s %7s", r[i].texto_inicio, r[i].texto_fim);
        r[i].inicio = minutos(r[i].texto_inicio);
        r[i].fim = minutos(r[i].texto_fim);
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
    int escolhidas[n];
    int total = 0;
    int ultimo_fim = -1;
    for (int i = 0; i < n; i++) {
        if (r[i].inicio >= ultimo_fim) {
            escolhidas[total++] = i;
            ultimo_fim = r[i].fim;
        }
    }
    printf("%d\n", total);
    for (int i = 0; i < total; i++) {
        printf("%s %s\n", r[escolhidas[i]].texto_inicio, r[escolhidas[i]].texto_fim);
    }
    return 0;
}
