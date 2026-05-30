#include <stdio.h>
int matriz[2][10];

void adicionarCarro(int andar , int vaga ) {
    vaga -=1;
    if (matriz[andar][vaga] != 1) {
        matriz[andar][vaga] = 1;
        printf("Vaga ocupada com sucesso\n\n");
    }else
        printf("Vaga ja esta ocupada\n\n");
    return;
}

void removerCarro(int andar,int vaga) {
    vaga -=1;
    if (matriz[andar][vaga] == 1) {
        matriz[andar][vaga] = 0;
        printf("Vaga desocupada com sucesso\n\n");
    }else
        printf("Vaga ja esta desocupada\n\n");
    return;
}

void vagasPorAndar(int andar) {
    int vagas = 0;
    for (int i = 0 ; i<10; i++) {
        if (matriz[andar][i] == 0) {
            vagas++;
        }
    }
    printf("%i vagas livres ao total no andar escolhido \n\n",vagas);
    return;
}

void vagasEstacionamento(void) {
    int vagasAndar0 = 0 ,vagasAndar1 = 0;
    for (int i = 0 ; i<10; i++) {
        if (matriz[0][i] == 0) {
            vagasAndar0++;
        }
    }for (int i = 0 ; i<10; i++) {
        if (matriz[1][i] == 0) {
            vagasAndar1++;
        }
    }
    printf("Vagas livres no subsolo = %i\n",vagasAndar0);
    printf("Vagas livres no terreo = %i\n",vagasAndar1);
    printf("Vagas livres ao total = %i\n\n",vagasAndar1 + vagasAndar0);
}

int main(void) {
    int andar,vaga;
    for ( int i = 0 ; i< 2; i++) {
        for (int j = 0 ; j <10; j++) {
            matriz[i][j] = 0;
        }
    }
    int escolha = 0;
    while (escolha != 5) {
        printf("1 - Adicionar carro \n2 - Remover carro\n3 - Vagas livres por andar\n4 - Vagas livres ao total\n5 - Sair\n");
        scanf("%d",&escolha);
        switch (escolha) {
            case 1:
                printf("Adicionar carro selecionado\n");
                do{
                    printf("Digite o andar\n0 - para o subsolo\n1 - para o terreo\n");
                    scanf("%d",&andar);
                    if (andar <0 || andar > 1)
                    printf("Andar inexistente tente denovo\n");
                }while (andar < 0 || andar > 1);
                do {
                    printf("Digite o numero da vaga\n");
                    scanf("%d",&vaga);
                    if (vaga < 1 || vaga > 10)
                        printf("Vaga inexistente tente denovo\n");
                }while (vaga < 1 || vaga > 10);
                adicionarCarro(andar , vaga);
                break;
            case 2:
                printf("Remover carro selecionado\n");
                do{
                    printf("Digite o andar\n0 - para o subsolo\n1 - para o terreo\n");
                    scanf("%d",&andar);
                    if (andar <0 || andar > 1)
                        printf("Andar inexistente tente denovo\n");
                }while (andar < 0 || andar > 1);
                do {
                    printf("Digite o numero da vaga\n");
                    scanf("%d",&vaga);
                    if (vaga < 1 || vaga > 10)
                        printf("Vaga inexistente tente denovo\n");
                }while (vaga < 1 || vaga > 10);
                removerCarro(andar , vaga);
                break;
            case 3:
                printf("Vagas livres por andar selecionada\n");
                do {
                    printf("Digite o andar\n0 - para o subsolo\n1 - para o terreo\n");
                    scanf("%d",&andar);
                    if (andar <0 || andar > 1)
                        printf("Andar inexistente tente denovo\n");
                }while (andar < 0 || andar > 1);
                vagasPorAndar(andar);
                break;
            case 4:
                printf("Vagas livres ao total selecionada\n");
                vagasEstacionamento();
                break;
            case 5:
                return 0;
                break;
        }
    }
    return 0;
}