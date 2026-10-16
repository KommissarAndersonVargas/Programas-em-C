#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int c[10];
    int i;

    for(i=0;i<10; i++)
    {
        c[i]=i*2;
        printf("O elemento %d vale %d\n", i, c[i]);

    }

    return 0;
}
*/
/*
int main()
{
    int c[5];
    int i;
    int soma=0;
    float media;

    printf("Digite 5 elementos\n");

    for(i=0;i<5; i++)
    {
       printf("Digite o %d elemento\n", i+1);

        scanf("%d", &c[i]);

    }
     for(i=0;i<5; i++)
    {
       soma = c[i]+ soma;
    }

    media= soma/5;

    printf("A soma de todos os elementos eh %d\n", soma);
    printf(" A media do array eh %.2f", media );


    return 0;
}
*/
/*
int main()
{
    int b [16]= { 1, 4, 5, 7, 8, 2, 10, 1, 8, 2, 9, 9, 7,7,7,7};
    int i, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0,c8=0,c9=0, c10=0;

    for(i=0; i<16; i ++)
    {
       printf( "a posição %d eh %d\n", i+1, b[i]);
        if (b[i]== 7)
        {
            c7++;

        }
    }
 printf(" o elento 7 aparece %d\n",c7 );
}
*/
int main ()
{
    int c[10];
    int i;

    for(i=0; i<10; i++)
    {
        c[i]= i+3;
        printf("o elemento %d eh %d\n", i,c[i]);

    }


}
