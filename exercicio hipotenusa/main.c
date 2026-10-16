#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double hipotenusa(double n1, double n2);


int main()
{
    double lado1;
    double lado2;
    double TeoPit;

    printf("Digite os dois lados\n");
    scanf("%lf%lf", &lado1, &lado2);

    TeoPit= hipotenusa(lado1,lado2);

    printf("A hipotenusa do triangulo retângulo eh: %.2lf", TeoPit);

    return 0;
}
double hipotenusa(double n1, double n2)
{
    return sqrt((n1*n1+n2*n2));
}
