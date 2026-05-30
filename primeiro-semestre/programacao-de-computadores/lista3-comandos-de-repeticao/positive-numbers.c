#include <stdio.h>
 
int main() {
 
    double valor;
    int positivos = 0;
    
    for (int i = 0; i < 6 ;i++) {
        scanf("%lf", &valor);
        
        if (valor >= 0) {
            positivos++;
        }
    }
    
    printf("%d valores positivos\n", positivos);
 
    return 0;
}