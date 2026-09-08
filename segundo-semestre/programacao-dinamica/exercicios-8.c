#include <stdio.h>
#include <string.h>

int dp[1000];

int quebra_palavras(char *s, char *dict[], int dict_size) {
  int tamanho = strlen(s);

  dp[0] = 1;
  for (int i = 1; i <= tamanho; i++) {
    dp[i] = 0;

    for (int j = 0; j < i; j++) {
      if (!dp[j]) continue;

      int tamanho_palavra = i - j;
      for (int k = 0; k < dict_size; k++) {
        if ((int)strlen(dict[k]) == tamanho_palavra && strncmp(s + j, dict[k], tamanho_palavra) == 0) {
          dp[i] = 1;
          break;
        }
      }

      if (dp[i]) break;
    }
  }

  return dp[tamanho];
}

int main() {
  char s[] = "leetcode";
  char *dict[] = {"leet", "code"};
  int dict_size = 2;

  int resultado = quebra_palavras(s, dict, dict_size);
  printf("A string pode ser segmentada? %s\n", resultado ? "sim" : "nao");

  return 0;
}
