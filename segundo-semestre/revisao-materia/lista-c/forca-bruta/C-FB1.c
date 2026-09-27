#include <stdio.h>

int busca_char(const char *s, char c) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    char s[1001];
    char c;
    scanf("%1000s %c", s, &c);
    printf("%d\n", busca_char(s, c));
    return 0;
}
