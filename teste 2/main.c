#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2,soma, numero;

    printf(" Digite valor para n1\n");
    scanf("%i", &n1);

    printf("Digite valor de n2\n");
    scanf("%i", &n2);

    soma = n1+ n2;

    printf("\n soma igual: %i", soma);

    if ( soma >= 60)
    {
        printf("\nAprovado, Parabens\a");
    }
    else
    {
        printf( "\nRecuperaçao, estude e consigira");
    }



    return 0;
}
