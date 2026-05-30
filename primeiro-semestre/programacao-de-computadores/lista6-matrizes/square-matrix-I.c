#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int N;

    while (scanf("%d", &N) && N != 0) {
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                
                int dist_cima = i;
                int dist_baixo = (N - 1) - i;
                int dist_esq = j;
                int dist_dir = (N - 1) - j;
                
                int valor = min(min(dist_cima, dist_baixo), min(dist_esq, dist_dir)) + 1;
                
                if (j == 0) {
                    printf("%3d", valor);
                } else {
                    printf(" %3d", valor);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}