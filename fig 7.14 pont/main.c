#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x=5;
    int y;

    const int *const ptr= &x;

    printf("%d\n", *ptr);

    *ptr= 7; //erro, *ptr é const não pode atribuir novo valor
     ptr= &y; //erro, ptr é const não pode atribuir novo endereço
    return 0;
}
