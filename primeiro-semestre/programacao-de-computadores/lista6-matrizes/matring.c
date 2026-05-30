#include <stdio.h>
#include <string.h>

int main() {
    char m[4][100]; 

    if (scanf("%s", m[0]) == EOF) return 0;
    scanf("%s", m[1]);
    scanf("%s", m[2]);
    scanf("%s", m[3]);

    int colunas = strlen(m[0]);
    int N = colunas - 2;

    int F = (m[0][0] - '0') * 1000 + (m[1][0] - '0') * 100 + (m[2][0] - '0') * 10 + (m[3][0] - '0');
    
    int last = colunas - 1;
    int L = (m[0][last] - '0') * 1000 + (m[1][last] - '0') * 100 + (m[2][last] - '0') * 10 + (m[3][last] - '0');

    for (int i = 1; i <= N; i++) {
        int Mi = (m[0][i] - '0') * 1000 + (m[1][i] - '0') * 100 + (m[2][i] - '0') * 10 + (m[3][i] - '0');
        
        int Ci = (F * Mi + L) % 257;
        
        printf("%c", Ci);
    }
    printf("\n");

    return 0;
}