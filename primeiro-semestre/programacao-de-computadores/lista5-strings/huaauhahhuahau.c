#include <stdio.h>
#include <string.h>

int main() {
    char risada[51];
    char vogais[51];
    int i, j = 0;

    scanf("%s", risada);

    for (i = 0; i < strlen(risada); i++) {
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || 
            risada[i] == 'o' || risada[i] == 'u') {
            vogais[j] = risada[i];
            j++;
        }
    }
    
    vogais[j] = '\0';

    int e_palindromo = 1; // Assume que é engraçada (S)
    int tam_vogais = strlen(vogais);

    for (i = 0; i < tam_vogais / 2; i++) {
        if (vogais[i] != vogais[tam_vogais - 1 - i]) {
            e_palindromo = 0; 
            break;
        }
    }

    if (e_palindromo) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}