#include <stdio.h>
#include <string.h>

int main() {
    int C;
    char ataque[1001];

    if (scanf("%d", &C) != 1) return 0;

    while (C--) {
        scanf("%s", ataque);

        int a1 = 0, a2 = 0;
        int encontrouK = 0;
        int i = 0;

        while (ataque[i] != '\0') {
            if (ataque[i] == 'k') {
                encontrouK = 1;
            }
            if (ataque[i] == 'a') {
                if (encontrouK == 0) {
                    a1++;
                } else {
                    a2++;
                }
            }
            i++;
        }

        int totalA = a1 * a2;

        printf("k");
        for (int j = 0; j < totalA; j++) {
            printf("a");
        }
        printf("\n");
    }

    return 0;
}