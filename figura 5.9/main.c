#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    unsigned seed; // numero usado para criar semente de numero aleatóriio

    printf("Digite a semeste:");
    scanf("%u",&seed);

    srand(seed); // inicia gerador de numero aleatorio

    for (i=1; i<=10; i++)
    {
        printf("%10d", 1+(rand()%6));
        if (i% 5 == 0)
        {
            printf("\n");
        }
    }


    return 0;
}
