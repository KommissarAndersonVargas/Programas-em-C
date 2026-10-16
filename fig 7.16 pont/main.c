#include <stdio.h>
#include <stdlib.h>

size_t getSize(float *ptr);
int main(void)
{

 float array[20];
 printf("O numero de bytes no array eh %d"
       "\nO numero de bytes retornadospor getSize eh %d\n  ");
       return 0;
}
size_t getSize(float *ptr)
{
    return sizeof(ptr);
}
