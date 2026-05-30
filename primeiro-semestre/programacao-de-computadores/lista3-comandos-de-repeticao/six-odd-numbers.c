#include <stdio.h>
 
int main() {
 
    int totalOdds = 0;
    int valor = 0;
    
    scanf("%d", &valor);
    
    while(totalOdds < 6) {
        
        if (valor % 2 == 1) {
            printf("%d\n", valor);
            totalOdds++;
        }
        
        valor++;
    }
 
    return 0;
}