#include <stdio.h>

int main() {
    int L;
    char T;
    double M[12][12];
    double soma = 0.0;

    // Lê a linha desejada
    scanf("%d", &L);
    
    // Lê a operação desejada (S para Soma, M para Média)
    // O espaço antes do %c limpa o buffer do teclado (ignora o \n)
    scanf(" %c", &T);

    // Lê os 144 elementos da matriz 12x12
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    // Realiza a soma de todos os elementos da linha L
    for (int j = 0; j < 12; j++) {
        soma += M[L][j];
    }

    // Imprime o resultado formatado com 1 casa decimal com base na operação
    if (T == 'S') {
        printf("%.1lf\n", soma);
    } else if (T == 'M') {
        printf("%.1lf\n", soma / 12.0);
    }

    return 0;
}