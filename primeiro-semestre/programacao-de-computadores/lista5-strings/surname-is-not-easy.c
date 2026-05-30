#include <stdio.h>
#include <string.h>
#include <ctype.h>

int eh_vogal(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    int N;
    char sobrenome[50];

    if (scanf("%d", &N) != 1) return 0;

    while (N--) {
        scanf("%s", sobrenome);

        int dificuldade = 0; // 1 se for difícil, 0 se for fácil
        int contador_consoantes = 0;
        int tam = strlen(sobrenome);

        for (int i = 0; i < tam; i++) {
            if (isalpha(sobrenome[i]) && !eh_vogal(sobrenome[i])) {
                contador_consoantes++;
                if (contador_consoantes >= 3) {
                    dificuldade = 1;
                    break; 
                }
            } else {
                contador_consoantes = 0;
            }
        }

        if (dificuldade) {
            printf("%s nao eh facil\n", sobrenome);
        } else {
            printf("%s eh facil\n", sobrenome);
        }
    }

    return 0;
}