#include <stdio.h>

int main () {
    int cpf[11], j=10;
    int total= 0;
    printf("insira o cpf(apenas digitos\n");
    for (int i = 0; i<11; i++) {
        scanf("%1d", &cpf[i]);
        if (i<9){
        total += cpf[i]*j;
            --j;
        }
    }
    int digito1 = total % 11;
    if (digito1==0|| digito1 ==1) {
        digito1=0;
    }else
        digito1 = 11 - digito1;
    total=0;
    j=11;
    for (int i = 0; i<10; i++) {
        total += cpf[i]*j;
        j--;
    }
    int digito2 = total % 11;
    if (digito2==0|| digito2 ==1) {
        digito2=0;
    }else
        digito2 = 11 - digito2;
    if (digito1 == cpf[9]&&digito2 == cpf[10]) {
        printf("o cpf ");
        for (int i = 0; i<11; i++) {
            if (i==3) {
                printf(".");
            }if (i==6) {
                printf(".");
            }
            if (i==9) {
                printf("-");
            }
            printf("%i", cpf[i]);

        }
        printf(" existe\n");
        return 0;

    }else {
        printf("o cpf nao existe");
        return 1;
    }

}