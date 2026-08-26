#include <stdio.h>

int posicao_valida(int tabuleiro[], int linha, int coluna) {
  for (int i = 0; i < linha; i++) {
    if (tabuleiro[i] == coluna) {
      return 0;
    }
    if (tabuleiro[i] - i == coluna - linha) {
      return 0;
    }
    if (tabuleiro[i] + i == coluna + linha) {
      return 0;
    }
  }

  return 1;
}

void imprimir_tabuleiro(int tabuleiro[]) {
  for (int linha = 0; linha < 8; linha++) {
    for (int coluna = 0; coluna < 8; coluna++) {
      if (tabuleiro[linha] == coluna) {
        printf("R ");
      } else {
        printf(". ");
      }
    }
    printf("\n");
  }
  printf("\n");
}

int colocar_rainha(int tabuleiro[], int linha) {
  if (linha == 8) {
    imprimir_tabuleiro(tabuleiro);
    return 1;
  }

  int solucoes = 0;

  for (int coluna = 0; coluna < 8; coluna++) {
    if (posicao_valida(tabuleiro, linha, coluna)) {
      tabuleiro[linha] = coluna;
      solucoes += colocar_rainha(tabuleiro, linha + 1);
    }
  }

  return solucoes;
}

int resolver_8_rainhas() {
  int tabuleiro[8];
  return colocar_rainha(tabuleiro, 0);
}

int main() {
  int total = resolver_8_rainhas();
  printf("Total de solucoes: %d\n", total);

  return 0;
}
