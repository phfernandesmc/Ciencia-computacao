#include <stdio.h>

int main() {

    int A, B, C, D, E;

    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

    int totalPares = 0;
    int totalInpares = 0;
    int totalPositivos = 0;
    int totalNegativos = 0;

    if (A % 2 == 0) {
        totalPares++;
    } else {
        totalInpares++;
    }

    if (B % 2 == 0) {
        totalPares++;
    } else {
        totalInpares++;
    }

    if (C % 2 == 0) {
        totalPares++;
    } else {
        totalInpares++;
    }

    if (D % 2 == 0) {
        totalPares++;
    } else {
        totalInpares++;
    }

    if (E % 2 == 0) {
        totalPares++;
    } else {
        totalInpares++;
    }

    if (A > 0) {
        totalPositivos++;
    } else if (A != 0) {
        totalNegativos++;
    }

     if (B > 0) {
        totalPositivos++;
    } else if (B != 0) {
        totalNegativos++;
    }

     if (C > 0) {
        totalPositivos++;
    } else if (C != 0) {
        totalNegativos++;
    }

     if (D > 0) {
        totalPositivos++;
    } else if (D != 0)  {
        totalNegativos++;
    }

     if (E > 0) {
        totalPositivos++;
    } else if (E != 0) {
        totalNegativos++;
    }

    printf("%d valor(es) par(es)\n", totalPares);
    printf("%d valor(es) impar(es)\n", totalInpares);
    printf("%d valor(es) positivo(s)\n", totalPositivos);
    printf("%d valor(es) negativo(s)\n", totalNegativos);

    return 0;
}
