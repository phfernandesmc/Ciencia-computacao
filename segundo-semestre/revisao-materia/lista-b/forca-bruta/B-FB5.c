#include <stdio.h>
#include <math.h>

struct ponto {
    int x;
    int y;
};

double pontos_mais_proximos(int n, struct ponto p[]) {
    double menor = -1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double dx = p[i].x - p[j].x;
            double dy = p[i].y - p[j].y;
            double d = sqrt(dx * dx + dy * dy);
            if (menor < 0 || d < menor) {
                menor = d;
            }
        }
    }
    return menor;
}

int main(void) {
    int n;
    scanf("%d", &n);
    struct ponto p[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &p[i].x, &p[i].y);
    }
    printf("Distancia: %.2f\n", pontos_mais_proximos(n, p));
    return 0;
}
