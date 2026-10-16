#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int area;
    int base;
    int altura;
    int numero;
    int volume;
    int largura;

printf("digite um valor de 1 a 2\n");
scanf("%i",&a);
    switch(a)
    {

    case 1:
    printf("Digite um valor de base\n");
    scanf("%i",&base);
    printf("Digite um valor de altura\n");
    scanf("%i",&altura);
    area= base*altura;
    printf("\no valor de area eh=%i", area);
    break;
    case 2:
        printf("Digite um valor de base\n");
    scanf("%i",&base);
    printf("Digite um valor de altura\n");
    scanf("%i",&altura);
    printf("digite um valor de largura\n");
    scanf("%i",&largura);
    volume= base*altura*largura;
    printf("o valor de volume eh:=%i", volume);
    break;

    default:
        printf("valor invalido");
    }
    return 0;
}
