#include <stdio.h>

int main() {
    int X[10];
    int i;

    // Loop para ler os 10 valores
    for (i = 0; i < 10; i++) {
        scanf("%d", &X[i]);
        
        // Verifica se o número é nulo (0) ou negativo
        if (X[i] <= 0) {
            X[i] = 1;
        }
    }

    // Loop para imprimir os valores formatados
    for (i = 0; i < 10; i++) {
        printf("X[%d] = %d\n", i, X[i]);
    }

    return 0;
}