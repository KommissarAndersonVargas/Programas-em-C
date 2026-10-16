#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a;
    int cont=1;
    int OPrand;

    printf("Gerador de n° aleatórios \n");
    srand(time(NULL));

    while(cont<=10)
    {
        OPrand= 2+(rand()%6);



              printf("%d  ", OPrand);

              cont++;
    }
    return 0;
}
