#include <stdio.h>
#include <stdlib.h>

int main()
{
    // código sitch case com caracteres
char opcao;

printf("dIGITE aLGO\n");

while(opcao!= EOF)
{
scanf("%c", &opcao);
if(opcao==EOF)
  {


      return 0;
  }
  else
  {


switch(opcao)
{

case 'a':
  // seu código para o caso 1
  printf("Deu certo");

  break;
case 'b':
  // seu código para o caso 2
  break;
case 'c':
  // seu código para o caso 3
  break;
case 'd':
  // seu código para o caso 4
  break;
case 'e':
  // seu código para o caso 5
  break;
default:
    printf("erro\n");
}



}

}



    return 0;
}

