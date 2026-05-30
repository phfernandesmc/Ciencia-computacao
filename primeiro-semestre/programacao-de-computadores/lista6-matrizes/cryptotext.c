#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int C;
    
    if (scanf("%d", &C) != 1) return 0;
    
    while (C--) {
        char mensagem[105];
        scanf("%s", mensagem);
        
        int tamanho = strlen(mensagem);
        
       
        for (int i = tamanho - 1; i >= 0; i--) {
            if (islower(mensagem[i])) {
                printf("%c", mensagem[i]);
            }
        }
        printf("\n");
    }
    
    return 0;
}