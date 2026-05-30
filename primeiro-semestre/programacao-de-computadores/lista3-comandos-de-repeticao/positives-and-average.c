#include <stdio.h>

int main() {

    double valor;
    double totalValores = 0;
    int positivos = 0;

    for (int i = 0; i < 6 ;i++) {
        scanf("%lf", &valor);

        if (valor >= 0) {
            positivos++;
            totalValores += valor;
        }
    }

    printf("%d valores positivos\n", positivos);

    double media = totalValores / positivos;
    
    printf("%.1f\n", media);

    return 0;
}
