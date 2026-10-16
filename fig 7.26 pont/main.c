#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void bubble(int work[], const int size, int (*compare) (int a, int b)  );
int crescente (int a, int b);
int decrescente (int a, int b);


int main()
{

int order;
int contador;

int a[SIZE] = {2,6, 4, 8, 10, 12, 89, 68, 45, 37};

printf(" Digite 1 para classificar em ordem crescente, \n"
       "Digite 2 para classificar em ordem drecescente: ");

scanf("%d", &order);

printf("\nItens de dados na ordem original \n");
printf("\nItens de dados na ordem original\n");

for(contador = 0; contador < SIZE; contador ++)
{
    printf("%5d", a[contador]);
}
if( order == 1)
{
    bubble(a, SIZE, crescente);
    printf("\nItens de dados em ordem crescente\n");
}
else
{
    bubble (a, SIZE, decrescente);
    printf("\nItens de dados em ordem decrescente\n");
}
for(contador = 0; contador < SIZE; contador ++)
{
    printf("%5d", a[contador]);
}

printf("\n");

    return 0;
}

void bubble(int work[], const int size, int (*compare) (int a, int b)  )
{
    int pass;
    int contador;

    void inverte(int *element1Ptr, int *element2ptr);

    for(pass=1; pass < SIZE; pass++)
    {
        for(contador=0; contador <SIZE-1 ; contador++)
        {
            if((*compare)(work[contador], work[ contador +1]))
            {
                inverte(&work[contador], &work[contador+1]);
            }
        }
    }
}


void inverte(int *element1Ptr, int *element2ptr)
{
        int manu;

        manu= *element1Ptr;
        *element1Ptr= *element2ptr;
        *element2ptr = manu;

}

int crescente (int a, int b)
{
    return b < a;
}
int decrescente (int a, int b)
{
      return b > a;
}


