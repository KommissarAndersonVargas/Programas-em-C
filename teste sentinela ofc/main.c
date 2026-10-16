#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int i=0;

     printf(" DIGITE A\n");
     scanf("%d", &a);


    while(a!=-1)
    {
        i++;
        b= a+2;
    printf(" a alterado eh: %d\n",b);
    scanf("%d", &a);


    }
    return 0;
}
