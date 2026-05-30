#include <stdio.h>
 
int main() {
 
    int distance;
    float totalFuel;

    scanf("%d", &distance);
    scanf("%f", &totalFuel);

    const float consumption = distance / totalFuel;
    printf("%.3f km/l\n", consumption);
    return 0;
}