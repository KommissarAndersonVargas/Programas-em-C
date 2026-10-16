#include <stdio.h>
#include <stdlib.h>

int main()
{


    int  a, c, b, i=0 ;

printf(" Digite um numero\n");
scanf("%d", &a);


 while( a!=-1)
 {
     if (a== EOF)
     {
         break;
     }
     i++;
     printf(" Contador vale %d \n", i);
    printf(" Digite um numero\n");
    scanf("%d", &a);

 }







    return 0;
}
