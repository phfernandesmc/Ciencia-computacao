#include <stdio.h>

int pesq_bin(int * vet , int busca,int quantidade) {
    int comeco = 0;
    int fim = quantidade -1;
    int meio;
    while (comeco <= fim) {
        meio = comeco + (fim - comeco)/2;

        if (vet[meio] == busca) {
            printf("\nVetor encontradado na posicao %d\n", meio);
            return 0;
        }
        else {
            if (busca < vet[meio]) {
                fim = meio - 1;
            }
            else {
                comeco = meio + 1;
            }
        }
    }
    printf("valor [%i] nao encontrado\n", busca);
    return 1;


}
int main () {
    int quantidade ,busca;
    printf("Insira quantos elementos o vetor tera\n");
    scanf("%i",&quantidade);
    int vet[quantidade];
    printf("Insira os valores do vetor em ordem crescente\n");
    for (int i = 0; i< quantidade; i++) {
        scanf("%d",&vet[i]);
    }
    printf("\nDigite o valor que deseja buscar no vetor: ");
    scanf("%i",&busca);
    printf("\n");
    pesq_bin(vet,busca,quantidade);


    return 0;
}