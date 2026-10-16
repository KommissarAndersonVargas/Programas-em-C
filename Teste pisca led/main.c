#include <stdio.h>
#include <stdlib.h>

int main()
{
int soma=0;
int numero;

for(numero=2; numero<=100; numero+=2)
{
    printf("\nO numero eh: %i", numero);
    soma+= numero;
}
    printf("Soma eh: %i", soma);
    return 0;

}

