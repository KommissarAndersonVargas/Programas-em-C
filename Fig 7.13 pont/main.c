#include <stdio.h>
#include <stdlib.h>
//tentando modificar um ponteiro constante para dados não constantes
int main()
{

    int x;
    int y;

    int * const Ptr = &x;
    * Ptr=7; //permitido
     Ptr = &y; // eero, ptr é const não pode atribuirnovo endereço

    return 0;
}
