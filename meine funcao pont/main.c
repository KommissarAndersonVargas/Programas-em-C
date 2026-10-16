#include <stdio.h>
#include <stdlib.h>
int arrayT[]={0};
void somaArray(int arrayA[],int arrayB[], int (*soma)(int a, int b) );
void Sp1(int array[], int array2[]);

int main()
{
    int array1[]={2,4,6,8};
    int array2[]={3,6,10,12};
    int i;


    somaArray(array1, array2, Sp1 );

    printf("\n");

    for(i=0; i < 4; i++)
      {


             printf( "O arrayT eh: %d\n ",arrayT[i]);


      }

    return 0;
}
void somaArray(int arrayA[],int arrayB[], int (*soma)(int a, int b) )
{
    (*soma)( arrayA, arrayB);
    int i;

    for(i=0; i < 4; i++)
      {


    printf(" ArrayA: %d\n", arrayA[i]);


      }
    printf("\n");

    for(i=0; i < 4; i++)
      {


    printf(" ArrayB: %d\n", arrayB[i]);


      }
    printf("\n");

      for(i=0; i < 4; i++)
      {


    arrayT[i]= arrayA[i]+arrayB[i];


      }

}
void Sp1(int array[], int array2[])
{
   int t;
   int t1;

   t= strlen(array);
   t1= strlen(array2);

    int i;

    for(i=0; i< t; i++)
    {
        array[i]= array[i] * 8;

    }
    for(i=0; i < t1; i++)
    {
        array2[i]= array2[i] * 4;
    }
}
/*
int Sp2(int array[])
{
   int t;
   t= strlen(array);
    int i;

    for(i=0; i< t; i++)
    {
        array[i]= array[i] * 3;
    }
}
*/
