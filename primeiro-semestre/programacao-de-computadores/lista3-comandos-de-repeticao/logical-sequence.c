#include <stdio.h>

int main () {

    int i, num, quadrado = 0, cubo = 0;

    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        quadrado = i * i;
        cubo = (i * i) * i;
        printf("%d %d %d\n", i, quadrado, cubo);
        printf("%d %d %d\n", i, quadrado + 1, cubo + 1);
    }
    return 0;
}
