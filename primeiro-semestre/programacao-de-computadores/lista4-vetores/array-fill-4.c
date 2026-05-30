#include <stdio.h>

void imprimir_vetor(int vetor[], int tamanho, char *tipo) {
    for (int i = 0; i < tamanho; i++) {
        printf("%s[%d] = %d\n", tipo, i, vetor[i]);
    }
}

int main() {
    int par[5], impar[5];
    int n, i, c_par = 0, c_impar = 0;

    for (i = 0; i < 15; i++) {
        scanf("%d", &n);

        if (n % 2 == 0) {
            par[c_par] = n;
            c_par++;
            if (c_par == 5) {
                imprimir_vetor(par, 5, "par");
                c_par = 0;
            }
        } else {
            impar[c_impar] = n;
            c_impar++;
            if (c_impar == 5) {
                imprimir_vetor(impar, 5, "impar");
                c_impar = 0;
            }
        }
    }

    imprimir_vetor(impar, c_impar, "impar");
    imprimir_vetor(par, c_par, "par");

    return 0;
}