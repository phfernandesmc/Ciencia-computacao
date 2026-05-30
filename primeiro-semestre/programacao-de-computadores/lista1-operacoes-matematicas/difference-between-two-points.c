#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Plans;

int main() {
    Plans plan1;
    Plans plan2;

    scanf("%lf %lf", &plan1.x, &plan1.y );
    scanf("%lf %lf", &plan2.x, &plan2.y );

    double result = sqrt(pow(plan2.x - plan1.x, 2) + pow(plan2.y - plan1.y, 2));

    printf("%.4f\n", result);

    return 0;
}
