#include <stdio.h>
#include <stdlib.h>

float CalcularTaxas(float hora);

int main()
{
    float taxa;
    float resultado;
    int i;
    float totalD=0;
    float totalH=0;


    printf("Carro\t");
    printf("Horas\t");
    printf("Taxa\t");
    printf("\n");
    printf("\n");


   for(i=1; i<=3; i++)
   {



    printf("%d", i);

    printf("\t");

    scanf("%f",&taxa);

    resultado= CalcularTaxas(taxa);

    printf("\t\t%.2f", resultado);

    totalH= totalH + taxa;
    totalD= totalD + resultado;
   printf("\n");

   }
   printf("TOTAL\t%.2f\t%.2f",totalH , totalD);
    return 0;
}
float CalcularTaxas(float hora)
{
    if(hora<=3)
    {
        return 2.00;
    }
    if (hora > 3 && hora <=4 )
    {
        return 2.50;
    }
     if (hora > 4 && hora <=5 )
    {
        return 3.00;
    }
         if (hora > 5 && hora <=6 )
    {
        return 3.50;
    }

    else
    {
        return 10.00;
    }
}
