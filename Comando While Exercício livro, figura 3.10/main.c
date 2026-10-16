#include <stdio.h>
#include <stdlib.h>

int main()
{
   int aprovados=0;
   int reprovados=0;
   int alunos=1;
   int resultado;

   while(alunos<=10)
   {


    printf("Forneça o resultado, 1: para aprovado, 2: ára reprovado\n");
    scanf("%i", &resultado);


    if (resultado==1)
        {
        aprovados= aprovados +1;

           }
     else if (resultado==2)
        {
        reprovados= reprovados +1;
           }

        alunos= alunos +1;
   printf("Aprovados %i\n",aprovados);
   printf("Reprovados %i\n", reprovados );

   if(aprovados>8)
   {
       printf("Bonus ao instrutor");
   }


}

return 0;
}
