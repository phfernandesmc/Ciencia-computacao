#include <stdio.h>

int main() {

    int time;

    scanf("%d", &time);

    int segundos = time % 60;

    int quantidadeTotalMin = (time - segundos) / 60;

    int minutos = quantidadeTotalMin % 60;

    int hora = (quantidadeTotalMin - minutos) / 60;

    printf("%d:%d:%d\n", hora, minutos, segundos);

    return 0;
}
