#include <stdio.h>
#include <stdlib.h>
/*
int main()

{
int n[5]={12, 45, 67, 89, 16};
int i;
printf("posicao\t");
printf("valor vetor\t");
printf("\n");


for (i=0; i<5; i++)
{
    printf("%d\t", i);
    printf("%d\t", n[i]);
    printf("\n");
}


    return 0;
}
*/
/*
int main()

{
int a[20]={10, 5, 9, 9, 9, 8, 7, 1, 2, 3, 4, 4, 4, 4, 4, 2, 2, 2, 2, 3};
int i;
int j;
int frequency[20]={0};


for (i=0; i<20; i++)
{
   ++frequency[ a[i] ];
}

for (j=0; j<20; j++)
{
    printf("%d\n", frequency[j]);
}


    return 0;
}
*/
/*
int modiArray (int array1[], int tamanho);
int modimodi(int e);

int main(void)
{
    int array[]= {4,5,6,10,1};
    int i;
    int re;
    int re1;
    re= modimodi(array[0]);
    printf(" Array modificado temporariamente eh: %d\n", re);

    modiArray(array, 5);

    for(i=0; i<5; i++)
    {
            printf("%d\n", array[i]);

    }

    re1= modimodi(array[1]);

        printf(" Array modificado 2 temporariamente eh: %d\n", re1);


    return 0;
}
int  modimodi(int e)
{
    int f;
    f= e*e*e;
    return f;
}
int modiArray (int array1[], int tamanho)
{
   int tamH;
   tamH = tamanho;
   int j;

    for(j=0; j<tamH; j++)
    {
        array1[j]= array1[j]*2;
    }

}
*/
/*
int main()
{


    float aluno1[]={10.0, 8.1, 5.7, 7.6, 8.3, 8.4, 7.6, 7.4, 9.7, 8.5}; // 10 elements
    float ele=10.0;
    float total=0;
    int i;


    for (i=0; i<10; i++)
    {

        printf(" A nota %d do aluno eh: %.2f\n", i, aluno1[i]);
        total= aluno1[i]+total;

    }


    printf("A média do aluno eh: %.2f ", total/ele );


    return 0;
}
*/
/*
int modifiVet(int vetor[], int tamanho);


int main()
{

   int vet[]={2,4,6,8,10};
   int resposta;
   int i;
   int k;
   int l;

   printf(" O vetor normal eh \n");

   for(i=0; i<5; i++)
   {
       printf("%d\n", vet[i]);
   }

       printf("O vetor  modificado eh\n");

       modifiVet(vet,5);

       for(k=0; k<5; k++)
   {
       printf("%d\n", vet[k]);
   }


   printf(" E se a gente emprimir o array sem usar a função ?\n");

           for(l=0; l<5; l++)
           {
            printf("%d\n", vet[l]);

           }


    return 0;
}
int modifiVet(int vetor[], int tamanho)
{
    int j;

    for(j=0; j<5; j++)
    {

        vetor[j]= vetor[j]*2;

    }

}
*/
/*
void vet1(int vet[], int tamanho);


int main(void)
{
    int vet2[]={1,2,3,4,5};
    vet1(vet2, 5);




    return 0;
}
void vet1(int vet[], int tamanho)
{
    int i;

    for(i=0; i<5; i++)
    {

        vet[i]= vet[i]*2;
        printf("%d\n", vet[i]);

    }

}
*/
/*
int main()
{
    int a[5]={0};
    int i;
    for(i=0; i<6; i++)
    {
        a[i]=i;
        printf("%d\n", a[i]);
    }
    return 0;
}
*/

int modi(int array1[]);

int main()
{
    int array[]={1,2,3,4};
    int i;

    modi(array);



    return 0;
}
int modi(int array1[])
{
    int i;
    for(i=0; i<4; i++)
    {
        array1[i]*=2;
        printf("%d\n",array1[i]);
    }
}
