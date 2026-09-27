#include <stdio.h>

int main() {
    int n, i, x;
    int A[100];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    scanf("%d", &x);
    
    int inicio = 0;
    int fim = n - 1;
    int meio;
    int comparacoes = 0;
    int posicao = -1;
    
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        
        comparacoes++; 
        
        if (x == A[meio]) {
            posicao = meio;
            break;
        } 
        else if (x > A[meio]) {
            inicio = meio + 1;
        } 
        else {
            fim = meio - 1;
        }
    }
    
    if (posicao != -1) {
        printf("%d\n", posicao);
    } else {
        printf("x não pertence ao vetor A\n");
    }
    
    printf("%d\n", comparacoes);
    
    return 0;
}