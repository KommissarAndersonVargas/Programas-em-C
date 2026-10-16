#include <stdio.h>
#include <stdlib.h>

void staticArrayInt(void);
void automaticArrayInt(void);


int main()
{
    printf("Primeira chamada para cada funcao: \n");
    staticArrayInt();
    automaticArrayInt();

    printf("\n\nSegunda chamada para cada funcao: \n");
    staticArrayInt();
    automaticArrayInt();

    return 0;
}
void staticArrayInt(void)
{
    static int array1[3];
    int i;
    printf("\nValores na entrada de staticArrayInt: \n");

    for(i=0; i<=2; i++)
    {
        printf("array1 [%d]= %d ", i, array1[i]);

    }

    printf("\nValores na saida de staticArrayInt: \n");

        for(i=0; i<=2; i++)
        {
            printf("array1[%d]= %d ", i, array1[i]+=5);
        }

// fim da função
}
    void automaticArrayInt(void)
    {
        int array2[3]={1,2,3};
        int i;

        printf("\n\nValores na entrada automaticArrayInt: \n");

        for(i=0; i<=2; i++)
        {
            printf("array[%d]= %d ", i, array2[i]);
        }

        printf("\nValores na saida de automaticArrayInt: \n");

        for(i=0; i<=2; i++)
        {
            printf("array[%d]= %d ", i, array2[i]+=5);
        }

    }
