#include <stdio.h>
#include <string.h>

int main() {
    int N;
    
    if (scanf("%d", &N) != 1) return 0;
    
    while (N--) {
        int K;
        scanf("%d", &K);
        
        char first_language[25], current_language[25];
        int all_same = 1; 
        
        scanf("%s", first_language);
        
        for (int i = 1; i < K; i++) {
            scanf("%s", current_language);
            
            if (strcmp(first_language, current_language) != 0) {
                all_same = 0;
            }
        }
        
        if (all_same) {
            printf("%s\n", first_language);
        } else {
            printf("ingles\n");
        }
    }
    
    return 0;
}