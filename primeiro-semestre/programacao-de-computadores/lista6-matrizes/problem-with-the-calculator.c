#include <stdio.h>
#include <ctype.h>

int main() {
    int N;
    
    if (scanf("%d", &N) != 1) return 0;
    
    while (N--) {
        char s[20];
        scanf("%s", s);
        
        long long soma = 0;
        long long numero_atual = 0;
        int lendo_numero = 0;
        
        for (int i = 0; s[i] != '\0'; i++) {
            if (isdigit(s[i])) {
                numero_atual = numero_atual * 10 + (s[i] - '0');
                lendo_numero = 1;
            } else {
                if (lendo_numero) {
                    soma += numero_atual;
                    numero_atual = 0;
                    lendo_numero = 0;
                }
            }
        }
        
        if (lendo_numero) {
            soma += numero_atual;
        }
        
        printf("%lld\n", soma);
    }
    
    return 0;
}