#include <stdio.h>

void converte(float *angulo) {
    const float pi = 3.14159265f;
    *angulo = *angulo * 180 / pi;
}

int main(void) {
    float angulo;
    scanf("%f", &angulo);
    converte(&angulo);
    printf("Graus: %.2f\n", angulo);
    return 0;
}
