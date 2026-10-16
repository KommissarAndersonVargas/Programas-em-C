#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int contador;
    int nota;
    int total;

    float media;

    total=0;
    contador=0;

    printf("Meu nome eh Anderson Roberto Machado de Vargas\n");
    printf("Digite a nota,  -1 no fim:");
    scanf("%d",&nota);

    while(nota!=-1)
    {
        total= total + nota;
        contador= contador + 1;

        printf("Digite a nota, -1 para finalizar:");
        scanf("%d", &nota);
    }
    if(contador!=0)
    {
        media= (float)total/ contador;

        printf(" Media da turma eh: %.2f\n", media);
    }
    else{
        printf("Nenhuma nota foi informada\n");
    }
    return 0;
}
