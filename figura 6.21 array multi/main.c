#include <stdio.h>
#include <stdlib.h>

void printArray(const int a[][3]);

int main(void)
{
    int array1 [2][3]= {{1,2,3}, {4,5,6}};
    int array2 [2][3]= {1,2,3,4,5};
    int array3 [2][3]= {{1,2}, {4}};

    printf("Valores em array1 por linha sao: \n");
    printArray(array1);

    printf("Valores em array2 por linha sao: \n");
    printArray(array2);

    printf("Valores em array3 por linha sao: \n");
    printArray(array3);


    return 0;
}
void printArray(const int a[][3])
{
    int i;
    int j;

    for(i=0; i<=1; i++)
    {
        for(j=0; j <=2 ; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
