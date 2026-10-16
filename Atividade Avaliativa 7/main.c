#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=1;
    int  r1, r2,r3;
    int contador=1;


    printf("Meu nome eh: Anderson Roberto Machado de Vargas\n");
    printf("N\t");
    printf("10* N\t");
    printf("100*N\t");
    printf("1000*N\t\n");
    printf("\n");


   while( n1<=10 || contador<=10)
   {


   printf("%i", n1);
   r1=10*n1;
   printf("\t%i", r1);
   r2=100*n1;
   printf("\t%i", r2);
   r3=1000*n1;
   printf("\t%i", r3);
   printf("\n");
   n1=n1+1;
   ++contador;


   }



    return 0;
}
