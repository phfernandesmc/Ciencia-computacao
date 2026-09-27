#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool palindromo(const char *s, int i, int j) {
    if (i >= j) {
        return true;
    }
    if (s[i] != s[j]) {
        return false;
    }
    return palindromo(s, i + 1, j - 1);
}

int main(void) {
    char s[1001];
    if (fgets(s, sizeof s, stdin) == NULL) {
        s[0] = '\0';
    }
    s[strcspn(s, "\r\n")] = '\0';
    printf(palindromo(s, 0, (int) strlen(s) - 1) ? "Palindromo\n" : "Nao palindromo\n");
    return 0;
}
