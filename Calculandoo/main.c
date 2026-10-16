#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int base;
    int altura;
    int area;

    printf("\nDigite um valor de a");
    scanf("%i", &a);

    if ( (a<20))

    {
        printf("\nValor aceito");
    printf("\nDigite o valor da base: ");
    scanf("%i", &base);
    printf("\nDigite o valor de altura:");
    scanf("%i",&altura);
    area= base*altura;
    printf("\nAnalise...");
    printf("\nO valor da area é=%i", area);


    }
else
    {
    printf("\nValor nao aceito");
}
}
