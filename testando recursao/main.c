#include <stdio.h>
#include <stdlib.h>
/*
int rec(num);


int main()
{
    int a;
    int resu;

    printf("Digite um inteiro: ");
    scanf("%d", &a);
    resu= rec(a);
    printf(" O RESULTADO DA RECURSAO EH:%d ", resu);
    return 0;
}
int rec(num)
{
    if (num == 3 || num== 0)
    {
        return 3;
    }
    else
    {
        return num + rec(num -2);
    }
}
*/
int rec(num);


int main()
{
    int a;
    int resu;

    printf("Digite um inteiro: ");
    scanf("%d", &a);
    resu= rec(a);
    printf(" O RESULTADO DA RECURSAO EH:%d ", resu);
    return 0;
}
int rec(num)
{
    if (num == 1 || num== 0)
    {
        return 1;
    }
    else
    {
        return num * rec(num -1);
    }
}
