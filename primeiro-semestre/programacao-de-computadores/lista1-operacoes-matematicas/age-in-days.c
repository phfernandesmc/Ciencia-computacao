#include <stdio.h>

int main() {

    int time;

    scanf("%d", &time);

    int years = time / 365;

    int days = (time % 365) % 30;

    int months = ((time % 365) - days) / 30;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);
    return 0;
}
