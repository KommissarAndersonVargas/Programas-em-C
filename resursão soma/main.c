#include <stdio.h>
#include <stdlib.h>

int SomaR(int num);

int main()
{
    int a, resul;
    printf("Digite um n: ");

    scanf("%d", &a);
    resul= SomaR(a);
    printf(" O numero na sequencia de anderson eh: %d", resul);
    return 0;
}
int SomaR(int num)
{
    if(num==1 || num == 0)
    {
        return 2;
    }
    else
    {
    return (num + SomaR(num-2));
    }
}
