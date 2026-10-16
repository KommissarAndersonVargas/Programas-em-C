#include <stdio.h>
#include <stdlib.h>
/*
int modiAr(int array[]);

int main()
{
    int ar[]={1,4,6};
    int i;

    printf("Na  função\n");
    modiAr(ar);



    printf("Pós função\n");
    for(i=0; i<3; i++)
    {

        printf("%d", ar[i]);
        printf("\n");
    }
     printf("Póspós função\n");
    for(i=0; i<3; i++)
    {

        printf("%d", ar[i]);
        printf("\n");
    }
    return 0;
}

int modiAr(int array[])
{
    int i;
    for(i=0; i<3; i++)
    {
        array[i]= array[i]*2;
        printf("%d", array[i]);
        printf("\n");
    }
}
*/


int main()
{


    int teste=50;
    int *x;
     x= &teste;

   modify(x);


     printf("o pronteiro agora vale: %d\n", *x );
     printf("o pronteiro agora vale: %d\n", *x );
     modify(x);
     printf("o pronteiro agora  segunda vez vale: %d\n", *x );
    return 0;
}
void modify(int *y)
{


     ++*y;
       return *y;

}
