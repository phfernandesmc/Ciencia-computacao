#include <stdio.h>
#include <string.h>

void quebrar_senha(char senha[5]) {
  int tentativa = 0;
  char senha_str[5];
  
  while (tentativa <= 9999) {
    sprintf(senha_str, "%04d", tentativa);
    printf("Tentativa: %s\n", senha_str);
    if (strcmp(senha_str, senha) == 0) {
      printf("Senha correta: %s\n", senha_str);
      break;
    }
    tentativa++;
  }
}

int main() {
  
  char senha[5] = "1234";

  quebrar_senha(senha);

  return 0;
}