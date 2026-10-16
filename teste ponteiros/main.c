#include <stdio.h>
#include <stdlib.h>


int codificado( int n)
{

	int a = n / 1000;
	int b = (n % 1000) / 100;
	int c = (n % 100) / 10;
	int d = n % 10;

	a = (a + 7) % 10;
	b = (b + 7) % 10;
	c = (c + 7) % 10;
	d = (d + 7) % 10;
	return (c * 1000 + d * 100 + a * 10 + b);
}

int decodi( int n)
{

	int a = n / 1000;
	int b = (n % 1000) / 100;
	int c = (n % 100) / 10;
	int d = n % 10;

	a = (a + 3) % 10;
	b = (b + 3) % 10;
	c = (c + 3) % 10;
	d = (d + 3) % 10;
	return (c * 1000 + d * 100 + a * 10 + b);
}

int main()
{
	int n;
	int resp1;
	int resp2;
	int funf;
	int vier;

	printf(" Digite um numero de 4 digitos:    ");
	scanf("%d",&n);
	printf("\n\n");

	funf= n/100000;
	vier= n/1000;


    resp1= codificado(n);
    resp2= decodi(codificado(n));

    if( funf== 0 && vier !=0 )
    {

	printf(" O numero codificado eh: %d\n\n",resp1 );

    printf(" O numero decodificado eh: %d\n\n", resp2);
    }
    else
    {
        printf("O numero nao corresponde\n");
    }
    return 0;
}
