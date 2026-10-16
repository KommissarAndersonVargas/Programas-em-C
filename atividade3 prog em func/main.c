#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int y = 0;
    int x = 0;

    for(y=1; y<=10; y++)
    {
        x= x + y;
    }
    printf(" x = %d\n", x);
    return 0;
}
