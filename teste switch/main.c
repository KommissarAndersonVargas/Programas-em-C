#include <stdio.h>
#include <stdlib.h>

int main()
{
   int analise;
    printf(" Digite um numero de 1 a 4\n");
    scanf("%d", &analise);

    while (analise!=-1)
    {
    switch (analise)

    {


    case 1:
        printf(" Teste de 1");
        break;
    case 2:
        printf(" Teste de 2");
        break;
    case 3:
        printf(" Teste de 3");
        break;
    case 4:
        printf(" Teste de 4");
        break;
    default:
                printf(" ERROR");
    }

    }


    return 0;
}
