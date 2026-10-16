#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i; // contador 1
    int j; // contador 2
    int vet[5];

    // laço para definir os numeres que são resultado da soma
    for(i=0; i<5;i++)
    {
        vet[i]= 4*2+i; // soma do vetor

    }
    // imprime os elementos do vetor vet
    for(j=0; j<5; j++)
          {

    printf("a posicao %d do vetor eh %d\n", j, vet[j]);

          }
    return 0;
}
