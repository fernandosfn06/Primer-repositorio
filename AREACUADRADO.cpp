#include <stdio.h>
#include <math.h>

int main() {
    double radio, area;
    printf("Por favor, introduce el valor del radio del círculo: ");
    scanf("%lf", &radio);

    area = M_PI * pow(radio, 2);

    printf("El área del círculo con radio %.2lf es: %.2lf\n", radio, area);

    return 0;
}



