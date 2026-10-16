#include <stdio.h>
#include <stdlib.h>

int main(void)
{


    int nota;
    int aCount=0;
    int bCount=0;
    int cCount=0;
    int dCount=0;
    int fCount=0;

    printf("Digite as notasem letra.\n");
    printf("Digite o caractere EOF para encerrar a entrada.\n");



while((nota=getchar())!=EOF)
{


   switch (nota)
          {
              case 'a':
              case 'A':
                  printf("deu certo\n");
              ++aCount;
              break;

              case 'b':
              case 'B':
                ++bCount;
              break;

              case 'c':
              case 'C':
                  ++cCount;
               break;

              case 'd':
              case 'D':
                  ++dCount;
                  break;
            case 'f':
            case 'F':
                  ++fCount;
                  break;
            case'\n':
            case'\t':

            break;

               default:
               printf("Letra de nota incorreta\n");
               printf("Digite nova nota\n");
               break;


          }
}
    printf("\nTutoriais para cada nota eh:\n");
    printf(" A: %i\n",aCount);
     printf(" B: %i\n",bCount);
      printf(" C: %i\n",cCount);
       printf(" D: %i\n",dCount);
        printf(" F: %i\n",fCount);
    return 0;
}


