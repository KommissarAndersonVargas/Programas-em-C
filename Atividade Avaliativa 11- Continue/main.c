#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;

    printf("Meu nome eh: Anderson Roberto Machado de Vargas\n");

    for(x=1;x<=10;x++)
    {
        if(x==5)
        {
            continue;
        }
        printf("%d",x);
    }

    printf("\nUsou continue para pular a exibicao do valor de 5\n");
    return 0;
}
