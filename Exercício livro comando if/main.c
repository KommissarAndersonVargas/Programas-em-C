#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int  num1;
  int  num2;
    printf("Meu nome eh: Anderson Roberto Machado de  Vargas\n");
    printf( "Digite dois inteiros\n");
    printf("As relações que eles satisfazem:");
    scanf("%i%i", &num1, &num2);// atribui um inteiro ao num 1 e num 2

    if (num1== num2)
    {
        printf("%i eh igual a %i\n", num1, num2);
    }
    if (num1!=num2)
    {
        printf("%i nao eh igual a %i\n", num1, num2);

    }
    if (num1<num2)
    {
         printf("%i eh menor que %i\n", num1, num2);
    }
    if (num1>num2)
    {
         printf("%i eh maior que %i\n", num1, num2);
    }
    if (num1<=num2)
    {
         printf("%i eh menor ou igual a %i\n", num1, num2);
    }
    if (num1>=num2)
    {
         printf("%i eh maior ou igual a %i\n", num1, num2);
    }
    // fim do programa
    return 0;
}
