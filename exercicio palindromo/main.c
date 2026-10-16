#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int testePalindromo(char stringTeste[]);
int main()
{
    //int i, j, iguais=0;
    //char inverso[20];
    //int tamanho, tamanho2;
    char string[20];
    int resultado;

    printf(" Digite uma string \n");

    scanf("%s", string);
    resultado= testePalindromo(string);
    printf("%d",resultado);

/*
   tamanho= strlen(string);// determina o tamanho da string
   tamanho2=strlen(string);// determina o tamanho da string



   for(i=0;     i < strlen(string)     ;  i++)
    {


    inverso[i]= string[tamanho-1];

    tamanho --;

     printf("%c", inverso[i]);


          printf("\n");

    }

// loop que prepara a condição de igualdade

   for(j=0; j< tamanho2; j++)
   {
       if(inverso[j] == string[j])
       {
           iguais ++;
       }
   }

// verificação se eh ou não um palindromo
if(iguais == tamanho2)
{
     printf(" eh pelindromo\n");
}
else
{
        printf(" nao eh polindromo\n");

}

*/
    return 0;

}

int testePalindromo(char stringTeste[])
{
   int i, j, iguais=0; // conatdores da função
   int tamanho, tamanho2; // variaveis de igualdade
   char inverso[20]; // string gerada invertida


   tamanho= strlen(stringTeste);// função strln determina o tamanho da string
   tamanho2=strlen(stringTeste);// função strlen determina o tamanho da string



   for(i=0;     i < strlen(stringTeste)     ;  i++)
    {


    inverso[i]= stringTeste[tamanho-1];

    tamanho --;

     printf("%c", inverso[i]);


          printf("\n");

    }



   for(j=0; j< tamanho2; j++) // loop que prepara a condição de igualdade se a stringTeste e inverso sao iguais

   {
       if(inverso[j] == stringTeste[j])
       {
           iguais ++;
       }
   }


if(iguais == tamanho2) // verificação se eh ou não um palindromo
{
    // printf(" eh palindromo\n");
     return 1;
}
else // caso a string nao seja um palindromo
{
        //printf(" nao eh palindromo\n");
        return 0;

   }
}

/*
for(TamanhoString= tamanho, TamanhoInverso=0;     TamanhoString >=0     ;  TamanhoString--, TamanhoInverso++)
    {


    inverso[TamanhoInverso]= string[TamanhoString];

     printf("%c", inverso[TamanhoInverso]);


          printf("\n");

    }
*/
