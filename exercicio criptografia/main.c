#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void SomaNum(int *m, int *c, int *d, int *u); // função que soma 7 a cada digito
void ModuloDivisao(int *m, int *c, int *d, int *u); // funçao que o resto de divisao por 10
//-------------------------descrip--------------------
void Descrip(int *m1, int *c1, int *d1, int *u1);


int main(void)

{

    int num, m, c, d, u; // digitos para criptografar
    int num1, m1, c1,d1, u1; // digitos para descriptografar
    int cripto; // numero criptografado
    int cripto1; // numero descriptografado
    int i; // elemento de igualdade para gerar numeros aleatorios na string

    printf(" Digite um numero de 4 digitos\n");
    scanf("%d", &num); // entra com o numero a ser criptografado
    printf("\n");
//-------------------------------------
// parte extra mudança de IP do usuário
    char *a[]={"Alemanha", "Argentina", "Franssa", " Italia", "Russia", "China"}; // string com nome de paisesa serem distribuidos

    srand(time(NULL)); // geração de sequencia aleatoria

    i=1+ rand() %6; // numero aleatorio de 1 a 6
   printf("IP: ");
   printf("%s\n\n",a[i]); // escolhe um nome de pais aleatoria da string

//------------------------------------
    m= num /1000;  // separando o primeiro digito em milhar
    c= num %1000;
    c= c/100; // separando 2 digito em milhar
    d= num%100;
    d= d/10;// separando o 3 digito em dezena
    u= num %10;
    u= u/1; //separando o digito da unidade

    if( m!=0 && num <=9999 )// so executa o programa se o numero diditado for de 4 digitos
    {

    m= num /1000; // separando o primeiro digito em milhar
    c= num %1000;
    c= c/100; // separando 2 digito em milhar
    d= num%100;
    d= d/10; // separando o 3 digito em dezena
    u= num %10;
    u= u/1; // separndo o 4 digito em unidade

    printf(" MILHAR  vale %d \n", m); // imprime o  1 digito
    printf(" CENTENA  vale %d \n", c); // imprime o 2 digito
    printf(" DEZENA  vale %d \n", d); // imprime o 3 digito
    printf(" UNIDADE  vale %d \n", u); // imprime o 4 digito


    printf(" \n\nSoma de 7 unidades aos digitos\n\n");

    // soma de 7 ao digito
    SomaNum(&m,&c,&d,&u); // chama função que soma 7 a cada digito por ponteiros


   printf(" \n\nCriptografado parcialmente\n\n");

    ModuloDivisao(&m,&c,&d,&u); // faz o resto de divisao por 10

     cripto = d*1000+ u*100+ m*10+ c*1; // forma o numero cripografando juntando as parte individuais dele novamente

    printf(" \nNumero cripotografado:  %d \n\n", cripto);

    // -----------------------------------------------descrip-------------------------------------------------
    //--------------------------------------------------------------------------------------------------------





    m1= cripto /1000;
    c1= cripto %1000;
    c1= c1/100;
    d1= cripto%100;
    d1= d1/10;
    u1= cripto %10;
   // u1= cripto/1;

    printf(" MILHAR  vale %d \n", m1);
    printf(" CENTENA  vale %d \n", c1);
    printf(" DEZENA  vale %d \n", d1);
    printf(" UNIDADE  vale %d \n", u1);

    printf(" \n\nDescripitografado parcialmente \n\n");

    Descrip(&m1,&c1, &d1, &u1);

  //  void positivo(int *n1); // declarando a função dentro de main pelo principio do menor privilégio
/*
    positivo(&m1); // chama a função que se o numero for negativo a função transforma em positivo
    positivo(&c1);// chama a função que se o numero for negativo a função transforma em positivo
    positivo(&d1);// chama a função que se o numero for negativo a função transforma em positivo
    positivo(&u1);// chama a função que se o numero for negativo a função transforma em positivo
*/
    cripto1 = (d1*1000+ u1*100+ m1*10+ c1*1);

    printf(" \nDescriptografado:     %d \n", cripto1);







    }

    else // se não atender a condição de if
    {

     printf(" \n\nALERTA, ACHTUNG, WARNING\n\n");
     printf(" O numero digitado esta no formato incorreto digite um numero de 4 digitos\n");
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
// ---- Imprime a soma de 7 ao digito------

    printf(" MILHAR  vale %d \n", *m);
    printf(" CENTENA  vale %d \n", *c);
    printf(" DEZENA  vale %d \n", *d);
    printf(" UNIDADE  vale %d \n", *u);
//----------------------------------------
}
void ModuloDivisao(int *m, int *c, int *d, int *u) // funçao que faz o resto de divisao por 10
{
//------------ resto de divisao por dez(modulo)-----
     *m= *m %10;
     *c= *c %10;
     *d= *d %10;
     *u= *u %10;
//--------------------------------------------------
//----------imprime o numero com o resto de divisao por dez(modulo)
    printf(" MILHAR  vale %d \n", *m); //1
    printf(" CENTENA  vale %d \n", *c);//2
    printf(" DEZENA  vale %d \n", *d); //3
    printf(" UNIDADE  vale %d \n", *u); // 4
//-----------------------------------------------
}

//--------------------------------------Descrip---------------------------------------
void Descrip(int *m1, int *c1, int *d1, int *u1)
{
   *m1= (*m1 +3)  ;
    *m1= *m1 % 10;

    *c1= (*c1+3)  ;
    *c1= *c1 % 10;

    *d1= (*d1 +3)  ;
    *d1= *d1 % 10;

    *u1= (*u1+3)  ;
    *u1= *u1 % 10;

    printf(" MILHAR  vale %d \n", *m1);
    printf(" CENTENA  vale %d \n", *c1);
    printf(" DEZENA  vale %d \n", *d1);
    printf(" UNIDADE  vale %d \n", *u1);
}
/*
void positivo(int *n1)
{
    if(*n1<0)
    {
        *n1 *-1;
    }
    else
    {
        *n1 * 1;
    }
}
*/




/*
int main()
{
   int numer4D;
   int digi1, digi2, digi3, digi4;
   int i;
   int a[4]={0};


   printf(" Digite um numero de 4 digitos\n");
   scanf("%d", &numer4D);







   printf("\n");


   if(numer4D >= 0 && numer4D <= 9999)
   {
       for(; numer4D != 0; )
       {

       digi = numer4D %10;
       printf("%d", digi);
       numer4D= numer4D/10;

       }

   }
   else
    {

     printf(" ALERTA, ACHTUNG, WARNING\n");
     printf(" O numero digitado eh maior do que 4 digitos digite\n "
            "um novo numero que atenda as caracteristicas do que\n "
            "foi pedido\n");
              scanf("%d", &numer4D);

    if(numer4D >= 0 && numer4D <= 9999)
{


       for(; numer4D != 0; )
       {

       digi = numer4D %10;
       printf("%d", digi);
       numer4D= numer4D/10;

       }
}
    } // fim do else


*/
/*
// programa certo
int main(void)

{

    int num, m, c, d, u;
    int cripto;

    printf(" Digite um numero de 4 digitos\n");
    scanf("%d", &num);

    if( num <= 9999 )
    {

    m= num /1000;
    c= num %1000;
    c= c/100;
    d= num%100;
    d= d/10;
    u= num %10;
    u= u/1;

    printf(" MILHAR  vale %d \n", m);
    printf(" CENTENA  vale %d \n", c);
    printf(" DEZENA  vale %d \n", d);
    printf(" UNIDADE  vale %d \n", u);


    printf(" \n\nSoma de 7 unidades aos digitos\n\n");

    // soma de 7 ao digito
    m= m +7;
    c= c+7;
    d= d+7;
    u= u+7;

    printf(" MILHAR  vale %d \n", m);
    printf(" CENTENA  vale %d \n", c);
    printf(" DEZENA  vale %d \n", d);
    printf(" UNIDADE  vale %d \n", u);


   printf(" \n\nPos soma de 7 unidades agora com o resto modulo divisao por 10\n\n");

     m= m %10;
     c= c %10;
     d= d %10;
     u= u %10;

    printf(" MILHAR  vale %d \n", m); //1
    printf(" CENTENA  vale %d \n", c);//2
    printf(" DEZENA  vale %d \n", d); //3
    printf(" UNIDADE  vale %d \n", u); // 4

//     encrypted = digit3*1000+digit4*100+digit1*10+digit2;
 //    cripto = m*1000+ c*100+ d*10+ u*1;
     cripto = d*1000+ u*100+ m*10+ c*1;

    printf(" \nDas numer auf criptografien  ist com os numeros invertidos %d \n", cripto);


    }

    else
    {

     printf(" \n\nALERTA, ACHTUNG, WARNING\n\n");
     printf(" O numero digitado eh maior do que 4 digitos digite\n "
            "um novo numero que atenda as caracteristicas do que\n "
            "foi pedido\n");
    }



    return 0;



}
*/
