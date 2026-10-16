#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int phy =192;
   int i;
   int j=0;
   int    fatora[100]={2,2,2,2,2,2,3};
   int cont=0;
   printf("oi\n");
   int tre=0, dois=0;


   int cphy;
   cphy=phy;
  for(i=2; i<phy; i++ )
   {
         if( cphy%2==0 && i%2==0 )
          {
                printf(" ");
           }
         else if ( cphy%2==0 && i%3==0 )
           {
                printf(" ");
           }

           else
           {
            printf("%d  ",i);

           }
   }






    return 0;
}
