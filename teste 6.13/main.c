#include <stdio.h>
#include <stdlib.h>

#define ai 5

void modifyArray(int b[], ai);
void modifyElement(int e);

int main(void)
{
int a[ai]= {0, 1, 2, 3, 4};
int i;

    printf("Efeitos da passagem do array inteiro por referencia\n\n0s"
           "valores o array original sao: \n");

    for(i=0; i<ai; i++)
    {
        printf("%3d", a[i]);
    }

    printf("\n");

    modifyArray(a, ai); // passagem por referencia

    printf("Os valores do array modificados sao: \n");

    for(i=0; i<ai; i++)
    {
            printf("%3d", a[i]);

    }

  print("\n\n\nEfeitos de passar elemento do array "
        "por valor: \n\n0 Valor de a[3] eh %d\n", a[3]);

        modifyElement(a[3]);// passagem por valor

        printf("O valor de a[3] eh %d\n", a[3]);

    return 0;
}
void modifyArray(int b[], ai)
{
    int j;

        for(j=0; j<ai; j++)
        {
            b[j] * =2
        }

}
void modifyElement(int e)
{
    printf("Valor em modifyElement eh %d\n", e*=2);
}

