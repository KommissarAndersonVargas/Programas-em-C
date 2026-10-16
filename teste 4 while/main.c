#include <stdio.h>
#include <stdlib.h>


int main()
{
int i=0;
int numero;
printf("Digite numero:\n");
scanf("%d", &numero);

while(numero!= -1)
{
    printf("Voce digitou:%d\n",numero);
           scanf("%d", &numero);
           i++;
}
printf("O processo se reitiu:%d\n",i);
return 0;

}

