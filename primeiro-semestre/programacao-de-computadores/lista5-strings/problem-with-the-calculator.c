#include <stdio.h>

int main() {
    int N;
    char linha[16]; 
    int n1, n2, n3;

    if (scanf("%d", &N) != 1) return 0;

    while (N--) {
        scanf("%s", linha);

        char s1[3], s2[4], s3[3];

        s1[0] = linha[2]; s1[1] = linha[3]; s1[2] = '\0';
        
        s2[0] = linha[5]; s2[1] = linha[6]; s2[2] = linha[7]; s2[3] = '\0';
        
        s3[0] = linha[11]; s3[1] = linha[12]; s3[2] = '\0';

        sscanf(s1, "%d", &n1);
        sscanf(s2, "%d", &n2);
        sscanf(s3, "%d", &n3);

        printf("%d\n", n1 + n2 + n3);
    }

    return 0;
}