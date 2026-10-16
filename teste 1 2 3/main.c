#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number1;
    int number2;
    int number3;
    int resultado;

    printf("Digite 3 inteiros:");
    scanf("%d%d%d", &number1,&number2, &number3);
    resultado=  maximum(number1,number2,number3);
    printf("O maximo eh: %d", resultado );
    return 0;
}
int maximum(int x, int y, int z)
{
    int max= x;

    if (y>max)
    {
        max=y;
    }
    if (z>max)
    {
        max=z;
    }
    return max;
}
