#include <stdio.h>
#include <string.h>

int compr(const char *str) {
    if (*str == '\0') {
        return 0;
    }
    return 1 + compr(str + 1);
}

int main(void) {
    char s[1001];
    if (fgets(s, sizeof s, stdin) == NULL) {
        s[0] = '\0';
    }
    s[strcspn(s, "\r\n")] = '\0';
    printf("Comprimento: %d\n", compr(s));
    return 0;
}
