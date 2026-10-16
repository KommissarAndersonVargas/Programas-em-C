#include <stdio.h>
#include <stdlib.h>

int main(void)
{

int a;
int *aPtr;

a=7;
aPtr=&a;

    printf("O enderesso de a eh %p"
           "\n  valor de aPtr eh %p", &a, aPtr);

    printf("\n\n O valor de a eh %d"
           "\nO valor de *Ptr eh %d", a, *aPtr);

    printf("\n\nMostrando que * e & são complementos um "
           "do outro \n& a *Ptr = %p"
           "\n &aPtr = %p\n", &*aPtr, *&aPtr);
    //printf( " o ponteiro tem endereço %p", &aPtr);


    return 0;
}
