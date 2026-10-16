#include <stdio.h>
#include <stdlib.h>



int main()
{
   int i=0;
   int num;
       printf("Digite um numero\n");

      scanf("%d",&num);
   while( (num= getchar())!=EOF)
   {


           printf(" O numero é: %d\n", num);
           i=i +1;
           scanf("%d",&num);

   }
printf("O processo se repitiu:%d\n", i);

    return 0;

}

