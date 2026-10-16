#include <stdio.h>
#include <stdlib.h>

int main()
{
    int produto=3;
    while(produto<100)
    {
        printf(" valor de produto eh %i\n", produto);
        printf("Valor insuficiente\n");
        produto= 5*produto;
    }

    return 0;
}
