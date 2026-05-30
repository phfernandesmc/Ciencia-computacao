#include <stdio.h>

int main() {

    int quantidade, resultado, i;

    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++) {
        if(i % 2 == 0) {
            resultado = i * i;
            printf("%d^2 = %d\n", i, resultado);
        }
    }

    return 0;
}
