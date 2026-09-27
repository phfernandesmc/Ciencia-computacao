#include <stdio.h>
#include <string.h>

int conta_substring(const char *s1, const char *s2) {
    int n = strlen(s1);
    int m = strlen(s2);
    int total = 0;
    if (m == 0) {
        return 0;
    }
    int i = 0;
    while (i <= n - m) {
        int j = 0;
        while (j < m && s2[j] == s1[i + j]) {
            j++;
        }
        if (j == m) {
            total++;
            i += m;
        } else {
            i++;
        }
    }
    return total;
}

int main(void) {
    char s1[1001], s2[1001];
    scanf("%1000s %1000s", s1, s2);
    printf("Ocorrencias: %d\n", conta_substring(s1, s2));
    return 0;
}
