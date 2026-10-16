#include <stdio.h>
#include <stdlib.h>

int VolumeCubo (int x);

int main(void)
{
    int ladoInf;
     int resposta;

    printf("Digite o lado de cube para descobri o volume");
    scanf("%d",&ladoInf);

    resposta = VolumeCubo(ladoInf);

    printf(" O volume do cubo eh: %d", resposta);

    return 0;
}
int VolumeCubo (int x)
{
    return x*x*x;
}
