#include <stdio.h>
#include <string.h>

int dp[1000][1000];

int menor(int a, int b, int c) {
  int m = a < b ? a : b;
  return m < c ? m : c;
}

int distancia_edicao(char *palavra1, char *palavra2) {
  int tamanho1 = strlen(palavra1);
  int tamanho2 = strlen(palavra2);

  for (int i = 0; i <= tamanho1; i++) {
    for (int j = 0; j <= tamanho2; j++) {
      if (i == 0) {
        dp[i][j] = j;
      } else if (j == 0) {
        dp[i][j] = i;
      } else if (palavra1[i - 1] == palavra2[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1];
      } else {
        int substituir = dp[i - 1][j - 1];
        int inserir = dp[i][j - 1];
        int excluir = dp[i - 1][j];
        dp[i][j] = 1 + menor(substituir, inserir, excluir);
      }
    }
  }

  return dp[tamanho1][tamanho2];
}

int main() {
  char palavra1[] = "horse";
  char palavra2[] = "ros";
  int resultado = distancia_edicao(palavra1, palavra2);
  printf("Distancia de edicao: %d\n", resultado);

  return 0;
}
