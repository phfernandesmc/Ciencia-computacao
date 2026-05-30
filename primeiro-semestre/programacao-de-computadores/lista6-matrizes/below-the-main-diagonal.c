#include <stdio.h>

int main() {
    char O;
    double M[12][12];
    double soma = 0.0;

    scanf(" %c", &O);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < i; j++) {
            soma += M[i][j];
        }
    }

    if (O == 'S') {
        printf("%.1lf\n", soma);
    } else if (O == 'M') {
        printf("%.1lf\n", soma / 66.0);
    }

    return 0;
}