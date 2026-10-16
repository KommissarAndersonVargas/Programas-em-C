#include <stdio.h>

/*
long factorial (long number);

int main(void)
{
    int i;
    for(i=0;i<=10; i++)
    {
    printf("%2d! = %1d\n", i, factorial(i));

    }
    return 0;

    }
long factorial (long number)
{
    if (number<=1)
    {
        return 1;
    }
    else
    {
        return (number*factorial(number -1));
    }

}
*/
long factorial(long number);
int conta;
int acumula=0;

int main(void)
{
    int i;
    for(i=0; i<12; i++)
    {
        conta=0;
        printf("%2d = %ld\n", i, factorial(i));
        printf("conta=%ld\n", conta);
        printf("acumula = %ld\n", acumula);

    }
    return 0;
}

long factorial(long number)
{
    conta++;
    acumula++;
    if (number<=1)
    {
        return 1;
    }
    else{
        return(number* factorial(number-1));
    }
}
