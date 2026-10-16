#include <stdio.h>
#include <stdlib.h>
int soma (int x);
int soma2 (int y);
void nenhum();

int main()

{
int i;
int numero;
int soma (int x);
int soma2 (int y);
void nenhum();
for(i=1; i<=10; i++)
        {



    printf("Digite um numero\n");
    scanf("%d",&numero);

if(numero==1)
{
    printf("%d\n", soma(numero));
}
else if (numero==2)
{
printf("%d\n", soma2(numero));
}
else
{
    nenhum();
}
        }
    return 0;
}
int soma (int x)
{
    return x+1;

}
int soma2 (int y)
{
    return y+2;
}
void nenhum()
{
    printf("error\n");
}
