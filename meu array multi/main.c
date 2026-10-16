#include <stdio.h>
#include <stdlib.h>
void printMult(int array[][3]);
void modiArray(int array[][3]);


int main()
{
    int a[2][3]={{2,4,6}, {1,3,8}};

    //int resp;
   modiArray(a);
   printMult(a);




    return 0;
}
void printMult(int array[][3])
{
    int i;
    int j;

    for(i=0; i < 2; i++)
    {
        for(j=0; j < 3; j++)
        {
            printf("%d  ", array[i][j]);
        }
        printf("\n");
    }
}
void modiArray(int array[][3])
{
     for(int i=0; i < 2; i++)
    {
        for(int j=0; j < 3; j++)
        {
            array[i][j]*= 2;
        }
     }
}
