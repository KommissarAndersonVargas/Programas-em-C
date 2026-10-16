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
            ++i;
           scanf("%d",&num);

           printf(" O numero é: %d\n", num);


   }
printf("O processo se repitiu:%d\n", i);

    return 0;

}
