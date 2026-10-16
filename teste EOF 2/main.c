#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int i;

    printf("Digite um numero para a");

    while((a= getchar()) != EOF)
    {
       printf("Digite outro n\n");
       scanf("%d",&a);

        i++;

        b= a+i;

            printf("B vale %d  ",b );


    }

    return 0;

}
