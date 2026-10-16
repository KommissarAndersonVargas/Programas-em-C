#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int n2;
    int n3=0;
    printf("Digite o Primeiro numero\n");
    scanf("%i", &n1);
    printf("Digite o segundo numero\n");
    scanf("%i", &n2);
    if(n1>n2||n1==n2)
    {
        printf("Tens relação\n");
    }
    else
    {
      printf("Não tens relação\n");
    }


    /*while(n3<15)
    {
    // funcionou no teste
        printf("digite n1\n");
        scanf("%i",&n1);
        printf("digite n2\n");
        scanf("%i",&n2);
        n3=n3+n1+n2;
        printf("N3 vale:%i",n3);

    }*/

   /* int a;
    int b;
    int c;
    printf("digite a\n");
    scanf("%i",&a);
    printf("digite b\n");
    scanf("%i",&b);
    c=a+b;
    if (c==4)
    {
        printf("deu certo\n");
    }
else
{
    printf("trash\n");

}*/

    return 0;
}
