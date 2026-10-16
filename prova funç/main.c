#include <stdio.h>
#include <stdlib.h>

int teste(int a, int b);

int main()
{
    int a;
    int b;
    int r;
    printf("Digite a e b\n");

    scanf("%d%d",&a,&b);
     r= teste(a, b);

     printf("a soma é %d", r);
    return 0;
}
int teste(int a, int b)
{
return a+b;
}
