#include <stdio.h>
#include <stdlib.h>
//registro cartaão ponto
int main()
{
    int contador;
    int hora1;
    int hora2;



    while(hora1!=-1)
    {

    printf("digite as horas de entrada e de saida\n");
    scanf("%i",&hora1);
     if (hora1==-1)
    {
        printf("fim do programa");
        break;
    }
    scanf("%i",&hora2);
        //scanf("%i%i",&hora1,&hora2);
        printf("Fulano entrou em %i e saiu em %i\n", hora1, hora2);
        +contador;



    }

    return 0;

}

