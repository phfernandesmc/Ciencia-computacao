#include <stdio.h>
#include <stdbool.h>

int main() {

    bool deveContinuar = true;
    int num1, num2;

    while (deveContinuar == true) {
        scanf("%d %d", &num1, &num2);

        if (num1 == num2) {
            deveContinuar = false;
        } else if (num1 > num2) {
            printf("Decrescente\n");
        } else {
            printf("Crescente\n");
        }
    }

    return 0;
}
