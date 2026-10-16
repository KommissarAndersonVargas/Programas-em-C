#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

void modifyArray( int b[],int tamanho);
void modifyElement(int e);

int main(void)
{
int a[SIZE]= {0, 1, 2, 3, 4};
int i;

    printf("Efeitos da passagem do array inteiro por referencia\n\n0s"
           "valores o array original sao: \n");

    for(i=0; i<SIZE; i++)
    {
        printf("%3d", a[i]);
    }

    printf("\n");

    modifyArray(a, SIZE); // passagem por referencia

    printf("Os valores do array modificados sao: \n");

    for(i=0; i<SIZE; i++)
    {
            printf("%3d", a[i]);

    }

  printf("\n\n\nEfeitos de passar elemento do array "
        "por valor: \n\n0 Valor de a[3] eh %d\n", a[3]);

        modifyElement(a[3]);// passagem por valor

        printf("O valor de a[3] eh %d\n", a[3]);

    return 0;
}
void modifyArray(int b[],int tamanho)
{
    int j;

        for(j=0; j<SIZE; j++)
        {
            b[j]*= 2;
        }

}
void modifyElement(int e)
{
    printf("Valor em modifyElement eh %d\n", e*=2);
}

