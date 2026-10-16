#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<time.h>

void SomaNum(int *m, int *c, int *d, int *u); // função que soma 7 a cada digito
void ModuloDivisao(int *m, int *c, int *d, int *u); // funçao que o resto de divisao por 10
//-------------------------descriptografia--------------------
void Descrip(int *m1, int *c1, int *d1, int *u1);// função que faz a descriptografia de numeros positvs
void positivo(int *n1); // função auxiliar que previne erros e transforma numeros negativos em positivos

int main(void) // função prinicpal

{

    int num, m, c, d, u, maisde4; // digitos para criptografar
    int m1, c1,d1, u1; // digitos para descriptografar
    int cripto; // numero criptografado
    int cripto1; // numero descriptografado
    int i; // elemento de igualdade para gerar numeros aleatorios na string

    printf("\n\nNomes: Anderson R.M. de Vargas e Leonardo Bender.  Data: 08/06/2022\n\n");
    printf("Digite um numero inteiro de 4 digitos:   ");
    scanf("%d", &num); // entra com o numero a ser criptografado
    printf("\n");

// parte extra mudança de IP do usuário
    char *a[]={"Alemanha", "Argentina", "Franssa", " Italia", "Russia", "China"}; // string com nome de paisesa serem distribuidos

    srand(time(NULL)); // geração de sequencia aleatoria

    i=0+ rand() %6; // numero aleatorio de 1 a 6
   printf("IP: ");
   printf("%s\n\n",a[i]); // escolhe um nome de pais aleatoria da string




    maisde4= num/10000; // extrair a maior casa do numero a ser analisado
    m= num /1000;  // separando o primeiro digito em milhar


//------------Codificação e decodificação de numeros inetiros negativos de 4 digitos


    if(num < 0 && m != 0 && maisde4==0) // se o numero for negativo de 4  digitos
    {


    m= num /1000; // separando o primeiro digito em milhar
    c= num %1000;
    c= c/100; // separando 2 digito em centena
    d= num%100;
    d= d/10; // separando o 3 digito em dezena
    u= num %10;
    u= u/1; // separndo o 4 digito em unidade



    // soma de 7 ao digito
    SomaNum(&m,&c,&d,&u); // chama função que soma 7 a cada digito por ponteiros

    ModuloDivisao(&m,&c,&d,&u); // faz o resto de divisao por 10

    cripto = d*1000+ u*100+ m*10+ c*1; // forma o numero criptografado

    printf(" \nNumero cripotografado:  %d \n\n", cripto); // imprime o numero criptografado


    positivo(&cripto); // tranforma o numero cripotografado em positivo se negativo


    m= num /1000; // separando o primeiro digito em milhar
    c= num %1000;
    c= c/100; // separando 2 digito em milhar
    d= num%100;
    d= d/10; // separando o 3 digito em dezena
    u= num %10;
    u= u/1; // separndo o 4 digito em unidade

    positivo(&m); // chama a função que se o numero for negativo a função transforma em positivo
    positivo(&c);// chama a função que se o numero for negativo a função transforma em positivo
    positivo(&d);// chama a função que se o numero for negativo a função transforma em positivo
    positivo(&u);// chama a função que se o numero for negativo a função transforma em positivo



// separando o numero para efetuar operações
    m1= (cripto /1000) ; // separa a casa do milhar
    c1= cripto %1000;
    c1= c1/100; // separa a casa da centena
    d1= cripto%100;
    d1= d1/10; // separa a casa da dezena
    u1= cripto %10; // separa a casa da unidade

    positivo(&m1); // chama a função que se o numero for negativo a função transforma em positivo
    positivo(&c1);// chama a função que se o numero for negativo a função transforma em positivo
    positivo(&d1);// chama a função que se o numero for negativo a função transforma em positivo
    positivo(&u1);// chama a função que se o numero for negativo a função transforma em positivo


//----------- operando a descriptografia
    m1= (m1 -7);
    m1= m1 % 10;

    c1= (c1-7);
    c1= c1 % 10;

    d1= (d1 -7) ;
    d1= d1 % 10;

    u1= (u1-7);
    u1= u1 % 10;
//----------- fim de operando a descriptografia

    positivo(&m1); // chama a função que se o numero for negativo a função transforma em positivo
    positivo(&c1);// chama a função que se o numero for negativo a função transforma em positivo
    positivo(&d1);// chama a função que se o numero for negativo a função transforma em positivo
    positivo(&u1);// chama a função que se o numero for negativo a função transforma em positivo

    if(m1 != d ) // caso ocorra erro e milhar original for diferente do milhar decodificado
    {
        m1= -m1 +d+ m1; //executa a diferença entre um numero e outro
        positivo(&m1); // torna o numero posistivo

    }
    if(c1 != u ) // caso ocorra erro a centena original for diferente da centena decodificada
    {
        c1= -c1+u+c1;//executa a diferença entre um numero e outro
        positivo(&c1);// torna o numero posistivo

    }
    if(d1 != m ) // caso ocorra erro e a dezena original for diferente da dezena decodificada
    {
        d1=-d1+m+d1;//executa a diferença entre um numero e outro
        positivo(&d1);// torna o numero posistivo

    }
    if(u1 != c ) // caso ocorra erro e unidade original for diferente da unidade decodificada
    {
        u1=-u1+c+u1;//executa a diferença entre um numero e outro
        positivo(&u1);// torna o numero posistivo

    }



    cripto1 = (d1*1000+ u1*100+ m1*10+ c1*1) *-1;// numero descodificado



    printf(" \nDescriptografado:     %d \n", cripto1);// imprime o numero descodificado



    }



//------------Codificação e decodificação de numeros inetiros positivos de 4 digitos

    if(num <=9999 && num>=1000) // se o numero for de 4 digitos positivo
    {


    m= num /1000; // separando o primeiro digito em milhar
    c= num %1000;
    c= c/100; // separando 2 digito em milhar
    d= num%100;
    d= d/10; // separando o 3 digito em dezena
    u= num %10;
    u= u/1; // separndo o 4 digito em unidade



    // soma de 7 ao digito
    SomaNum(&m,&c,&d,&u); // chama função que soma 7 a cada digito por ponteiros


    ModuloDivisao(&m,&c,&d,&u); // faz o resto de divisao por 10


    cripto = d*1000+ u*100+ m*10+ c*1; // forma o numero criptografado

    printf(" \nNumero cripotografado:  %d \n\n", cripto); // imprime o numero criptografado


    positivo(&cripto); // tranforma o numero cripotografado em positivo se negativo

    // -----------------------------------------------descripografia------------------------------------------
    //--------------------------------------------------------------------------------------------------------

// separando o numero para efetuar operações
    m1= cripto /1000; // separa a casa do milhar
    c1= cripto %1000;
    c1= c1/100; // separa a casa da centena
    d1= cripto%100;
    d1= d1/10; // separa a casa da dezena
    u1= cripto %10; // separa a casa da unidade
   // u1= cripto/1;



    Descrip(&m1,&c1, &d1, &u1); // chama a função que decodifica parcialmente



    positivo(&m1); // chama a função que se o numero for negativo a função transforma em positivo
    positivo(&c1);// chama a função que se o numero for negativo a função transforma em positivo
    positivo(&d1);// chama a função que se o numero for negativo a função transforma em positivo
    positivo(&u1);// chama a função que se o numero for negativo a função transforma em positivo



    cripto1 = (d1*1000+ u1*100+ m1*10+ c1*1);// numero descodificado


    printf(" \nDescriptografado:     %d \n", cripto1);// imprime o numero descodificado


    }


  else // se não atender a condição de if
    {

     printf(" \n\nALERTA, ACHTUNG, WARNING\n\n");// alerta
     printf(" O numero digitado esta no formato incorreto digite um numero de 4 digitos\n"); // alerta
    }




    return 0; // retorna 0



}
void SomaNum(int *m, int *c, int *d, int *u) // função que soma 7 a cada digito
{
// ----soma de 7 ao digito-----------------
    *m= *m +7;
    *c= *c+7;
    *d= *d+7;
    *u= *u+7;
//-----------------------------------------

}
void ModuloDivisao(int *m, int *c, int *d, int *u) // funçao que faz o resto de divisao por 10
{
//------------ resto de divisao por dez(modulo)-----
     *m= *m %10;
     *c= *c %10;
     *d= *d %10;
     *u= *u %10;
//--------------------------------------------------

}

//--------------------------------------Descrip-----
void Descrip(int *m1, int *c1, int *d1, int *u1) // decodifica os digitis
{
    //---separa as casas de cada dígito soma 3 e faz o modulo para decodificar totalmente
   *m1= (*m1 +3)  ;
    *m1= *m1 % 10;

    *c1= (*c1+3)  ;
    *c1= *c1 % 10;

    *d1= (*d1 +3)  ;
    *d1= *d1 % 10;

    *u1= (*u1+3)  ;
    *u1= *u1 % 10;
//----------------------------------

}

void positivo(int *n1) // conversão para numeros positivos
{
    if(*n1<0) // se numero negativo
    {
       *n1= *n1 *-1; // multiplica numero por -1 e torna positivo
    }
    else // se não for negativo
    {
        *n1=*n1 * 1; // multiplica numero por 1
    }
}
