#include <stdio.h>
 
int main() {
 
    int highest = 0, position, num;
    
    for (int i = 1; i <= 101;i++) {
        scanf("%d", &num);
        
        if (num > highest) {
            highest = num;
            position = i;
        }
    }
    
    printf("%d\n", highest);
    printf("%d\n", position);
 
    return 0;
}