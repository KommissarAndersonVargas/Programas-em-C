#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100



char string[SIZE]; // declara a string de origem como variavel global para ser usada em outros lugares do codigo
char inverso[SIZE]; // declara a string inversa de origem como variavel global para ser usada em outros lugares do codigo

void RemoveSpace(char str[]); // declara função que remove espaços
int FormaPalindromo(char stringTeste[]); // declara a função que forma o palindromo
int TestPalindrome (int tamanho);// declara a função que retorna ou nao o palíndromo
//--------------------------------------

void RemovePont1(char str[]); // delara função que remove pontos da lingua portuguesa as seguintes tem a mesma função
void RemovePont2(char str[]);
void RemovePont3(char str[]);
void RemovePont4(char str[]);
void RemovePont5(char str[]);
void RemovePont7(char str[]);
void RemovePont8(char str[]);
void RemovePont9(char str[]);
void RemovePont10(char str[]);
void RemovePont11(char str[]);

int main(void)
{
printf("\n");
printf("Nome do Aluno: Anderson Roberto Machado de Vargas.   Data de desenvolvimento: 09/05/22\n\n");
printf(" A funcao deve retornar 1 se a string armazenda\n no array for um palindromo e 0 se nao for.\n");
printf("A funcao devera ignorar espassos e sinais de\n pontuacao na string.\n\n ");




    int resultado;



    printf("Digite uma string: \n");




    gets(string); // leitura de carcter
    printf("\n");
    printf("String sem espassos em branco e acentuassao:\n");
    printf("\n");

    RemoveSpace(string);// chama a função que remove espaços em branco
    //--------------Removendo sinais de pontuação------------
    RemovePont1(string);
    RemovePont2(string);
    RemovePont3(string);
    RemovePont4(string);
    RemovePont5(string);
    RemovePont7(string);
    RemovePont8(string);
    RemovePont9(string);
    RemovePont10(string);
    RemovePont11(string);


    puts(string); // imprime a palavra sem espaços em branco

    printf("Palavra invertida:\n");

    resultado= FormaPalindromo(string); // chama a função que inverte a string
    printf("\n");

    printf("Caso for palindromo a resposta eh: 1, se nao for a resposta eh: 0. Entao a palavra eh:   ");
    printf("%d",resultado); // imprime o resultado

    printf("\n\n");

    return 0;

}

int FormaPalindromo(char stringTeste[]) // função que inverte a string
{
   int i, j, iguais=0; // conatdores da função
   int tamanho, tamanho2; // variaveis de igualdade





   tamanho= strlen(stringTeste);// função strln determina o tamanho da string
   tamanho2=strlen(stringTeste);// função strlen determina o tamanho da string



   for(i=0;     i < strlen(stringTeste)     ;  i++) // gera o palindromo = string invertida
    {


    inverso[i]= stringTeste[tamanho-1];

    tamanho --;

     printf("%c", inverso[i]);


          printf("\n");

    }

    int resp1; // variavel de igualdade

     resp1= TestPalindrome(tamanho2);// chama a função recursiva para determinar se eh polindromo



}
int TestPalindrome(int tam) // função que determina se é palindromo ou não
{


     if(inverso[tam] != string[tam]) // caso nao for polindromo
    {
        return 0; // retorna 0 se nao for palindromo
    }

    if(inverso[tam] == string[tam] && tam==0 )   // caso for polindromo
    {
       return 1; // retorna 1 se for palindromo
    }


    else if (inverso[tam] == string[tam]  ) // caso for  polindromo
    {
        return 1*(TestPalindrome(tam-1)); // retorna 1 se for palindromo e faz a recursão se a condição for alcançada
    }

} // fim da funçao


void RemoveSpace(char str[]){ // remove espaços em branco
    int count=0,i;
    for(i=0;str[i];i++){
        if(str[i]!=' '){
            str[count++]=str[i];
        }
    }
    str[count]=0; // todas as variaveis no contador viram zero
}
//-------------------------------------------------------------------------

void RemovePont11(char str[])  // remove sinal de pontuação " ) "
{
    int count=0, i;

    for(i=0;str[i];i++)
        {
        if(str[i]!=')' )
            {
            str[count++]=str[i];
                 }
    }
    str[count]=0;
}
void RemovePont10(char str[]) // remove sinal de pontuação " ( "
{
    int count=0, i;

    for(i=0;str[i];i++)
        {
        if(str[i]!='(' )
            {
            str[count++]=str[i];
                 }
    }
    str[count]=0;
}
void RemovePont9(char str[]) // remove sinal de pontuação " - "
{
    int count=0, i;

    for(i=0;str[i];i++)
        {
        if(str[i]!='-' )
            {
            str[count++]=str[i];
                 }
    }
    str[count]=0;
}


void RemovePont8(char str[]) // remove sinal de pontuação '  " '

{
    int count=0, i;

    for(i=0;str[i];i++)
        {
        if(str[i]!='"' )
            {
            str[count++]=str[i];
                 }
    }
    str[count]=0;
}

void RemovePont7(char str[]) // remove sinal de pontuação   " , "
{
    int count=0, i;

    for(i=0;str[i];i++)
        {
        if(str[i]!=',' )
            {
            str[count++]=str[i];
                 }
    }
    str[count]=0;
}

void RemovePont5(char str[]) // remove sinal de pontuação   " ; "
{
    int count=0, i;

    for(i=0;str[i];i++)
        {
        if(str[i]!=';' )
            {
            str[count++]=str[i];
                 }
    }
    str[count]=0;
}


void RemovePont4(char str[]) // remove sinal de pontuação   " : "
{
    int count=0, i;

    for(i=0;str[i];i++)
        {
        if(str[i]!=':' )
            {
            str[count++]=str[i];
                 }
    }
    str[count]=0;
}
void RemovePont3(char str[]) // remove sinal de pontuação   " . "
{
    int count=0, i;

    for(i=0;str[i];i++)
        {
        if(str[i]!='.' )
            {
            str[count++]=str[i];
                 }
    }
    str[count]=0;
}

void RemovePont2(char str[]) // remove sinal de pontuação   " ? "
{
    int count=0, i;

    for(i=0;str[i];i++)
        {
        if(str[i]!='?' )
            {
            str[count++]=str[i];
                 }
    }
    str[count]=0;
}
void RemovePont1(char str[]) // remove sinal de pontuação   " ! "
{
    int count=0, i;

    for(i=0;str[i];i++)
        {
        if(str[i]!='!' )
            {
            str[count++]=str[i];
                 }
    }
    str[count]=0;
}







