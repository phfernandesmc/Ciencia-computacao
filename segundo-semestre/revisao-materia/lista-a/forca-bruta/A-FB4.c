#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool string_match(const char *s1, const char *s2) {
    int n = strlen(s1);
    int m = strlen(s2);
    if (m > n) {
        return false;
    }
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && s2[j] == s1[i + j]) {
            j++;
        }
        if (j == m) {
            return true;
        }
    }
    return false;
}

int main(void) {
    char s1[1001], s2[1001];
    scanf("%1000s %1000s", s1, s2);
    printf(string_match(s1, s2) ? "Encontrada\n" : "Nao encontrada\n");
    return 0;
}
