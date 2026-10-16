#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int DescubraONumero(int num);
int Onum;

int main()
{
    int resultado;
    int seed;
    int numero;
    int n1;

    printf("Eu tenho um numero entre 1 e 1000\n");
    printf("Voce consegue descobrir qual eh?\n");
    printf("Digite sua primeira tentativa\n");


      srand(time(NULL));

     Onum= 1+(rand()%1000);

    printf("%d\n", Onum);

    //-----



    while(seed != -1)
    {
         scanf("%d", &seed);

        DescubraONumero(seed);

        if (seed==Onum)
        {
            printf("Digite outro numero para continuar jogando ou -1 para sair\n ");

        }

   }


   /* while(Onum!= seed )
   {
         scanf("%d", &seed);

             DescubraONumero(seed);
   }
*/
 //--------
    return 0;
}
int DescubraONumero(int num)
{
int n;

    if( num == Onum)
    {
        printf("Excelente! voce descobriu o numero!\n");


    }

    else if (num > Onum)
        {

          return printf("Muito alto. Tente novamente\n");
        }
        else
        {
             printf("Muito baixo. Tente novamente\n");

        }

}

