#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define SIZE 10 // variavel para o tamanho do array
int valor1;
int  mini; // variavel mini como global para ser usada em qualquer lugar do código
int recursiveMinimum(int array1[],int tamanho, int contI); // declara a recursividade

int main(void) // função principal
{



    printf("Nome do aluno: Anderson Roberto Machado de Vargas. Data de desenvolvimento: 18/05/2022\n");
    //printf(" Digite 1 para continuar o programa -1 para encerrar\n");
  //  scanf("%d", valor);
    printf("Digite 1 para continuar \n");
    scanf("%d", &valor1);

    //  if (valor ==1)

      while ( valor1==1 && valor1 != -1)
      {



    int array[SIZE]; // declara o array
    int i; // declara o contador
    int j=0; // declara o segundo contador
    int resultado; // declara variável de igualdade
   // int conter=0; // contador da função


    srand( time(NULL ) ); // gerador de numeros aleatórios para o array, para o array naõ ficar com os mesmos elementos a cada teste da função

    for(i=0; i < SIZE; ++i) // for para determinar os elentos do array
    {
        array[i]= 1+ rand()%20; // array definido com numeros aleatórios
    }


    printf("Os membros do array sao: \n");
    for(i=0; i < SIZE; ++i) // gerador de histograma para o array para melhor teste do exito do programa
    {
        printf("%d  ", array[i]); // imprime o array
        printf("histograma ");

        while(j< array[i]) // loop que gera o histograma para cada numero
        {
            printf("*"); // histograma
            j++; // adiciona um ao contador
        }
        j=0; // quando terminar o loop j ganha novamente o valor de 0

        printf("\n"); // nova linha
    }


  //  puts("");
    resultado = recursiveMinimum(array,9, 0 ); // chama a função

    printf(" O menor elemento eh: %d\n", resultado ); // imprime o resultado da função
    printf("\n\n");

    printf(" Digite 1 para continuar o programa -1 para encerrar: ");
    scanf("%d", &valor1);


      }


 // fim do while

return 0;
  }



int recursiveMinimum(int array1[], int tamanho, int contI) // função recursiva que retorna o menor elemento do array
{


   if( tamanho==0) // se/quando o tamanho atingir o valor de 0 retorna o menor valor do array
        {
            return mini; // retorna o menor valor
        }



     else // se não começa a recursaõa te tamanho ser zero

     {
         if(array1[tamanho] < array1[contI] ) // se array na pozição superior menor do que a da inferior
         {
            mini=array1[tamanho]; // a variavel minima é atribuida como "array [tamanho] "
              return recursiveMinimum (array1, tamanho-1, tamanho); // chama a função com recursividade para mudar o estado do contador tamanho
         }
         else // se não
         {
            mini=array1[contI];// a variavel minima é atribuida como "array [contI] "
             return recursiveMinimum (array1, tamanho-1, contI ++);// chama a função com recursividade para mudar o estado do contador tamanho e contI
         }
         }

     }

