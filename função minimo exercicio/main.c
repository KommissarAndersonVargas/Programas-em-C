#include <stdio.h>
#include <stdlib.h>

float minimum(float n1, float n2, float n3);

int main()
{
    float num1;
    float num2;
    float num3;
    float resultado;

    printf("Digite 3 numeros em ponto flutuante\n");
    scanf("%f%f%f", &num1, &num2, &num3);


    resultado= minimum(num1, num2, num3);

    printf("O menor dos 3 numeros eh: %.3f", resultado);

    return 0;
}

float minimum(float n1, float n2, float n3)
{
    float mini= n1;

    if(n2 < mini)
    {
        mini= n2;
    }
    if (n3< mini)
    {
        mini= n3;
    }

    return mini;

}
