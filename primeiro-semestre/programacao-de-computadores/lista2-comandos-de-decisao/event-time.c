#include <stdio.h>

int main() {
    int segundo, minuto, hora, dia, day1, day2;
    int h1, m1, s1, h2, m2, s2;
    
    scanf(" Dia %d", &day1);   
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf(" Dia %d", &day2);  
    scanf("%d : %d : %d", &h2, &m2, &s2);
    
    segundo = s2 - s1;
    minuto = m2 - m1;
    hora = h2 - h1;
    dia = day2 - day1;

    if (segundo < 0) {
        segundo += 60;
        minuto--;
    }
    if (minuto < 0) {
        minuto += 60;
        hora--;
    }
    if (hora < 0) {
        hora += 24;
        dia--;
    }
    
    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", hora);
    printf("%d minuto(s)\n", minuto);
    printf("%d segundo(s)\n", segundo);
    
    return 0;
}



