#include <stdio.h>
#include <math.h>

int main() {
    double u[10];
    int tamanho = sizeof(u)/sizeof(double);
    double media = 0,resultado = 0;
    for (int i =0 ; i<tamanho; i++) {
        scanf("%lf", &u[i]);
    }
    for (int i =0 ; i<tamanho; i++) {
        media += u[i];
    }
    media /= tamanho;
    for (int i =0 ; i<tamanho; i++) {
        resultado += pow(u[i]- media,2);
    }
    resultado = sqrt(resultado/tamanho);
    printf("%.2lf\n",resultado);
    return 0;
}