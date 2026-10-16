#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int b;

    printf("Digite um número\n");
    scanf("%i", &b);

    if(b==5)
    {
       trigono();

    }
    else
    {
    printf("erro\n");
    }

    return 0;
}
int trigono()
{
    int a;
    a= sqrt(144);
    printf("%i",a);
    return 0;
}
*/
/*
int main()
{
    escreva();
    return 0;
}
void escreva()
{
    printf("Bem vindo ao C#\n");
    return 0;
}
*/
int main ()
{

    int a;
    int b;
    printf("Digite a e b inteiros\n");
    scanf("%d%d",&a,&b);

    printf( "soma eh:%i",soma(a,b));

    return 0;
}
int soma(int lado1, int lado2)
{
    int p;
    p=lado1+ lado2;
    return p;
}
