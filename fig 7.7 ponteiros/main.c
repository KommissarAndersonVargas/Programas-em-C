#include <stdio.h>
#include <stdlib.h>

void cubeByReference(int *nPtr);

int main()
{

 int number =5;

    printf("O valor original do número eh %d\n", number);

    cubeByReference(&number);

   printf("\nO novo valor do número eh: %d\n", number);

    return 0;

}
void cubeByReference(int *nPtr)
{
    *nPtr =  *nPtr  *   *nPtr   *   *nPtr;
}
