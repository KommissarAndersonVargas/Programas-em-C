#include <stdio.h>
#include <stdlib.h>

int main()
{
int conta=2;
int produto=2;
int multi;
while( conta<10 )
{
    printf("Valor insuficiente\n");
    printf("%i", conta);

    ++conta;
}
printf("Nova condisao\n");
while (multi<20)
{

    multi= 2*produto;
    printf("%i", multi);
    printf("valor insuficiente\n");
    ++produto;

}
    return 0;
}
