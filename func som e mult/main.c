#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, resultado;

    printf("Digite o numero 1\n");
    scanf("%d",&num1);
    printf("Digite o numero 2\n");
    scanf("%d",&num2);



    resultado= SomaMult(num1, num2);
    printf("O resultado eh:%d\n", resultado);
    teste();
    teste();

    return 0;
}

int SomaMult(int soma1, int soma2)
{
    return (soma1+soma2)*2;
}
void teste(void)
{
    printf("Teste 1\n");
}
