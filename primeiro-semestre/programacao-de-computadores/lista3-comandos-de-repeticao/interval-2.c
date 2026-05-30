#include <stdio.h>
 
int main() {
 
    int numOfInterval, valor;
    int numIn = 0, numOut = 0;
     
     scanf("%d", &numOfInterval);
    
    for (int i = 0; i < numOfInterval; i++) {
        scanf("%d", &valor);
        if(valor >= 10 && valor <= 20) {
            numIn++;
        } else {
            numOut++;
        }
    }
    
    printf("%d in\n", numIn);
    printf("%d out\n", numOut);
 
    return 0;
}