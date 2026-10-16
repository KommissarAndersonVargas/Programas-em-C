#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota1;
    int nota2;
    int nota3;
    int media;
    printf("\nCalculo da media anual ");
    printf("\nDigite a nota 1:");
    scanf("%i",&nota1);
    printf("\nDigite a nota 2:");
    scanf("%i",&nota2);
    printf("\nDigite a nota 3:");
    scanf("%i",&nota3);
    media=(nota1+nota2+nota3)/3;


     if(media>=6)
     {
         printf("\nAprovado");
     }
        else
        {
            printf("\nRecuperassao");
        }
    return 0;
}
