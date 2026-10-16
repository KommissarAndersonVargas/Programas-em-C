#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf( " Digite um numero ");

    scanf("%d",&a);

    while((a=getchar())!=EOF)
    {
        a=a+a;
    printf("%d a vale -\n", a);
    printf( " Digite a numero \n");
    scanf("%d",&a);
    }

}
