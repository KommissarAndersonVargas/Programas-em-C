#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i;
    int j;
    int b;
    int array[20]={0};
    int Frequencia[20]={0};

    srand(time (NULL));

    for(i=0; i<20; i++)
    {


        array[i]= 1+(rand()%10);


        printf("%d\n", array[i]);
    }
/*
    for(k=0; k<20; k++)
    {
        a= array[k];
       ++ Frequencia[a];
    }

    for(face=1; face<20; face++)
    {
        printf("%4d%17d\n", face, Frequencia[face]);
    }
*/
    // inicio

    printf("Array organzinado sem duplicatas \n");

     for(j=0; j<20 ; j++)
    {
       b= array[j];
       // se a frequencia de um numero for menor que 1 printf do numero
        if( Frequencia[b] < 1 )
        {

            ++Frequencia[b];

            printf("%d\n", array[j]);
        }
        // se a frequencia do numero for maior que 1 ignora o numero
        else
        {

            continue;
        }
    }

// fim
    return 0;
}
