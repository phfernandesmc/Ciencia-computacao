#include <stdio.h>

float media2(float a, float b) {
    return (a + b) / 2;
}

int main(void) {
    float a, b;
    scanf("%f %f", &a, &b);
    printf("Media: %.2f\n", media2(a, b));
    return 0;
}
