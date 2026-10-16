#include <stdio.h>
#include <stdlib.h>

int total=0, total2=6;
int array1[5]={0};
int array2[5]={0};

int main()
{
    //int array1[5]={0};
    //int array2[5]={0};
    int classe;
    int i;
    int j;
    int a=1, b=6;
    int resp, posi1=0, posi2=0;



    printf("Favor digitar 1 para primeira classe\n");
    printf("Favor digitar 2 para segunda classe\n");
    scanf("%d",&classe);


while(classe != -1 )
{


    if(classe==1 && total !=5 )
    {
        while(classe!=2 && total !=5)
        {


        i=1;
        array1[posi1]= i;



        total= array1[posi1]+total;

        printf("-------------- Bilhete de embarque-------------------\n");
        printf(" Seu assento eh o numero: %d\n", a);
        printf(" Sessao do aviao: primeira classe\n");
        printf("------------------------------------------------------\n");
        ++a;



        posi1++;


        printf(" total agora vale = %d\n", total);

        //

        printf("Favor digitar 1 para primeira classe\n");
        printf("Favor digitar 2 para segunda classe\n");
        printf(" Para sair do sistema de passagens digite 8\n");
        scanf("%d",&classe);

        total= array1[posi1]+total;


        if(classe== 8)
        {
            break;
        }
      }
    }
    // fim do if while
    if(total== 5)
    {
        printf("  A classe escolhida esta cheia.\nVoce aceita ser colocado na classe economica? Digite 1 para nao e 2 para sim\n");
        scanf("%d",&classe);

        if( classe==1)
        {
        printf("O próximo voo saira em 3 horas. Digite -1 para sair do sistema");
        scanf("%d",&classe);
        }

    }
// condição de sair do laço
    if(total ==5 && total2 == 11)
         {
        break;
         }
//


     if (classe==2 && total2 != 11)
    {
        while (classe != 1 && total2 !=11)
        {

        b;
        j=1;
        array2[posi2]= j;


         total2= array2[posi2]+total2;

        printf("-------------- Bilhete de embarque-------------------\n");
        printf(" Seu assento eh o numero: %d\n", b);
        printf(" Sessao do aviao: classe economica\n");
        printf("------------------------------------------------------\n");

        b++;

        posi2++;


        printf(" total2 agora vale = %d\n", total2);

        //
         printf("Favor digitar 1 para primeira classe\n");
         printf("Favor digitar 2 para segunda classe\n");
         printf(" Para sair do sistema de passagens digite 8\n");


         scanf("%d",&classe);





          if(classe== 8)
        {
            break;
        }

 if(total2== 11)
    {
        printf("  A classe escolhida esta cheia.\nVoce aceita ser colocado na classe economica? Digite 1 sim e 2 para nao\n");
        scanf("%d",&classe);

        if( classe==2)
        {
        printf("O próximo voo saira em 3 horas. Digite -1 para sair do sistema");
        scanf("%d",&classe);

        }

    }


        } // while interno
    }// if


     // condição de sair do laço
     if(total ==5 && total2 == 11)
         {
        break;
         }


    //-------------------------------teste-------------------------------------------

// arrumar

  printf("\n");
  printf("Favor digitar 1 para primeira classe\n");
  printf("Favor digitar 2 para segunda classe\n");
  printf("\n");

  while (classe != -1)
  {
    scanf("%d",&classe);
    break;
  }

  }  // fim do while principal
  // arrumar

  printf(" Todos os voos estao lotados a AirAnderson agradece a preferencia\n Espere 3 Horas para o poximo voo\n");



    return 0;
}
