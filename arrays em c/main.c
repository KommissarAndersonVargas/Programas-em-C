#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int main()

{

int vetor[4]={1,45,3,9};
int vetor2[4]={50,2,3,333};
int i;


for(i=0; i<4; i++)
{
    printf("%d\n", vetor[i]);
}

    return 0;
}
*/
int main()

{

char vet [100];

printf("Digite uma string: ");
//scanf("%s", vet);
gets(vet);
int i=0;
while ( i<strlen(vet))
{

    printf("%c", vet[i]);
    i++;
}


    return 0;
}
