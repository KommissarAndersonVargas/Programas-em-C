#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int exp);

int main(void)
{
    int numero;
    int exp1;
    int resul;
    printf("Digite um numero para base e seu expoente");
    scanf("%d%d",&numero, &exp1);
    resul=  potencia(numero, exp1);
    printf("O resultado eh %d\n", resul);


    return 0;
}

int potencia(int base, int exp)
{
    int i=1;
    int potR;

            potR=base;

    while (i != exp)
    {


      potR=  potR*base;
        i++;
    }
    return potR;
}
