#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;

    // tirar do comentario para usar printf("Gerador de numeros aleatorios\n");
    srand(time(NULL));

    for(i=1; i<=10; i++)
    {
        printf("%d", 1+(rand()%10));
    }
    return 0;
}
