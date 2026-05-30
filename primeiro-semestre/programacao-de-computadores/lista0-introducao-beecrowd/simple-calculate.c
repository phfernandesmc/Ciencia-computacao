#include <stdio.h>

typedef struct {
    int code;
    int unit;
    float price;
} Product;
 
int main() {
    Product product1;
    Product product2;

    scanf("%d %d %f", &product1.code, &product1.unit, &product1.price);
    scanf("%d %d %f", &product2.code, &product2.unit, &product2.price);

    const float total = product1.unit * product1.price +
                  product2.unit * product2.price;

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}