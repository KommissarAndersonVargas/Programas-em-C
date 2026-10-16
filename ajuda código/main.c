#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1=1;
    int numero2=100;

   printf("N\n");

   while(numero1<=10)
   {
       printf("%d\n", numero1);
       numero1++;

   }
   printf("i\t");
   printf("N*100\t");

while(numero2<=1000)
   {
       printf("\t");
       printf("\n");
       printf("%d\t", numero2);
       numero2+=100;
   }

    printf("");
    return 0;
}
