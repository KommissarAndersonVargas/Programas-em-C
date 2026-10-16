#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int conversao;
    printf("Escreva um valor para A\n");
    scanf("%d",&a);
    if (a<0)
        {

       conversao= convert(a);
        printf(" a na verdade eh: %d",conversao);
        }
    else
    {
        printf( "Tudo tranquilo\n");
    }

    return 0;
}
int convert(int numero)
{

    return numero *-1;

}
