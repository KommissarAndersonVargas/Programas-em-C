#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void bubbleSort (int * const array, const int size );
void swap (int *element1Ptr, int *element2Ptr);

int main()
{
    int a[SIZE]={2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int i;

    printf("Itens de dados na ordem origanl\n");

    for(i=0; i< SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    bubbleSort(a, SIZE);

    printf("\n");

    printf(" itens de dados em ordem crescente\n");


     for(i=0; i< SIZE; i++)
    {
        printf("%4d", a[i]);
    }
    printf("\n");


    return 0;
}
void bubbleSort (int * const array, const int size )
{
    void swap(int *element1Ptr, int *element2Ptr);
    int pass;
    int j;
        for(pass=0; pass < size -1; pass++)
        {
            for(j=0; j< size -1; j++)
            {
                if(array[j] > array[j+1])
                {
                    swap(&array[j], &array[j+1]);// passa o local de momória dos arrays inviduas para que não sejam modificados por valor que é o que acontece quando é passado apenas um elemento do array apenas;
                }
            }
        }

}
    void swap(int *element1Ptr, int *element2Ptr)
    {
        int hold = *element1Ptr;
        *element1Ptr = *element2Ptr;
        *element2Ptr = hold;
    }
