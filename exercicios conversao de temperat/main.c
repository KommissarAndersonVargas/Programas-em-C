#include <stdio.h>
#include <stdlib.h>

int Celsius(int TFah);
int Fahrenheit(int Tcel);

int main()
{
    int i;
    int j;

// Celsius to Fah
    printf("Temperatura Celc\t");
    printf("Temperatura Fah\t");
    printf("\n");

    for(i=0;i<=100; i++)
    {
        int resultado1;

        printf("%d",i);
        printf("C");

        resultado1= Fahrenheit(i);
        printf("\t\t\t\t%d", resultado1);
        printf("F\n" );

    }
    printf("Temperatura em Fahrenheit\t");
    printf("Temperatura em Celsious\t");
    printf("\n");

     for(j=32;j<=212; j++)
    {
        int resultado2;

        printf("%d",j);
        printf("F");

        resultado2= Celsius(j);
        printf("\t\t\t\t\t%d", resultado2);
        printf("C\n" );

    }

    return 0;

}
int Celsius(int TFah)
{
    int c;

    return c = (TFah -32)/1.8;


}
int Fahrenheit(int Tcel)
{
    int F;

     F = (Tcel*1.8)+ 32;
     return F;


}
