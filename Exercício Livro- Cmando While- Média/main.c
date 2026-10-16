#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int contador; // número da nota a digitar em seguida
   int nota; // valor da nota
   int total; // soma das notas inseridas pelo usuário
   int media; // média das notas
   // inicialização
    total=0; // inicializa total
    contador=1; //inicializa contador do loop

     printf("Meu nome eh: Anderson Roberto Machado de Vargas\n");
   // fase de processamento
    while(contador <=10) // loop dez vezes
    {
        printf("Digite a nota:"); // indicação
        scanf("%d",&nota); // lê  a nota digitada
        total=total+nota; // soma ao total
        contador= contador + 1; // incrementa no contador
    }
    // fim do laço while
    media= total/10; // calculo da máedia com inteiros

    printf("  Media da turma eh:%d\n", media); // exibe o resultado
    return 0; // finaliza o programa

}
