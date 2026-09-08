#include <stdio.h>
#include <string.h>

int dp[1000][1000];

int subsequencia_comum_mais_longa(char *str1, char *str2) {
  int tamanho1 = strlen(str1);
  int tamanho2 = strlen(str2);

  for (int i = 0; i <= tamanho1; i++) {
    for (int j = 0; j <= tamanho2; j++) {
      if (i == 0 || j == 0) {
        dp[i][j] = 0;
      } else if (str1[i - 1] == str2[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      } else {
        int cima = dp[i - 1][j];
        int esquerda = dp[i][j - 1];
        dp[i][j] = cima > esquerda ? cima : esquerda;
      }
    }
  }

  return dp[tamanho1][tamanho2];
}

int main() {
  char str1[] = "abcde";
  char str2[] = "ace";
  int resultado = subsequencia_comum_mais_longa(str1, str2);
  printf("Tamanho da LCS: %d\n", resultado);

  return 0;
}
