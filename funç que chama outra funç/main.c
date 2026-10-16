#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int resultado1;

    printf("Digite o num 1\n");
    scanf("%d",&num1);
    printf("Digite o num 2\n");
    scanf("%d",&num2);

    resultado1= Somas(num1, num2);

    printf( " a soma dos numeros eh: %d",resultado1);

    return 0;
}
int Somas (int lad1, int lad2)
{
    if (lad1<0)
    {
        lad1= valorAbsoluto(lad1);
    }
    if (lad2<0)
    {
     lad2=valorAbsoluto(lad2);
    }
    int soma;
    soma = lad1+ lad2;
    return soma;
}
int valorAbsoluto(int x)
{

int Numpositivo;

Numpositivo= x * -1;

return Numpositivo;
}
