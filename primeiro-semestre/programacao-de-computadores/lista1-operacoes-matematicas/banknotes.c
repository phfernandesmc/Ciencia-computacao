#include <stdio.h>
 
int main() {
    int value;
    scanf("%d", &value);
    printf("%d\n", value);

    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    
    for (int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n", value / notas[i], notas[i]);
        value %= notas[i];
    }

    return 0;
}