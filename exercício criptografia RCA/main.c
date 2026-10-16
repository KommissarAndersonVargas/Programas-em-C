#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 200
int dois1=0 , trez1=0 , cinco1=0 , sete1=0 , n1=0 , onze1=0 , treze1=0 , deze1=0 , vintrez1=0 , vintsete1=0 , vintnove1=0 ;
int array[SIZE]={0};

void mod1(int *n, int *dois, int *tres, int *f);
void mod2(int *n, int *ci, int *sete, int *f);
void mod3(int *n, int *num, int *f, int *var);
void mod4(int *n, int *on, int *f);
void mod5(int *n, int *treze, int *f);
void mod6(int *n, int *deze, int *f);
void mod7(int *n, int *vintrez, int *f);
void mod8(int *n, int *vintsete, int *f);
void mod9(int *n, int *vintnove, int *f);
void imprimeFator(int *dois, int *tres, int *ci, int *sete, int * on, int *treze);
void imprimeFator2(int *deze, int *vintrez, int *vinsete, int *vintnove ,int *del, int *numero );
void valoresE(int *n, int *dois, int *tres, int *ci,int *sete, int *on, int *treze, int *deze, int *vintrez, int *vinsete, int *vintnove, int *del);


int main()
{
    int n, i, j, f, e;
    f=1;

    int dois, tres, numero, ci, sete, del, on, treze, deze, vintrez, vinsete,vintnove;
    dois=0; tres=0; numero=0; ci=0; sete=0; on=0; treze=0; deze=0; del=0; vintrez=0; vinsete=0; vintnove=0;


printf("Digite um numero para fatorar: ");
scanf("%d",&n);
    i=n;

   mod1(&n,&dois,&tres,&f);
  //printf(" f esta valendo: %d\n", f);

   mod2(&n, &ci, &sete,&f);
   //printf(" f esta valendo: %d\n", f);

   mod4(&n,&on,&f);
   mod5(&n,&treze,&f);
   mod6(&n,&deze,&f);
   mod7(&n, &vintrez, &f);
   mod8(&n, &vinsete, &f);
   mod9(&n, &vintnove,&f);


   mod3(&n,&numero,&f,&del);
    //printf(" f esta valendo: %d\n", f);




    // fim do while

    imprimeFator(&dois,&tres,&ci,&sete,&on,&treze);
    imprimeFator2(&deze,&vintrez, &vinsete, &vintnove,&del, &numero);

    valoresE(&i,&dois,&tres,&ci,&sete,&on, &treze, &deze,&vintrez, &vinsete,&vintnove,&del);
/*
    printf("Escolha um valor para e(expoente) de chave publica:   ");
    scanf("%d",&e);
*/
    // --------------função para e aqui



    // --------------função para e aqui


    printf("\n");
     return 0;
}

void mod2(int *n, int *ci, int *sete, int *f)
{
    while (*n%5 ==0 || *n%7 ==0)
    {



            if(*n%5 ==0)
            {
            *n=*n/5;
            ++*ci;
            *f= *f *5;
            }
            if(*n%7 ==0)
            {
            *n=*n/7;
            ++*sete;
             *f= *f *7;// fazer o mesmo if com 5 e 7 e botar um for para imprimir eles;
            }

    }
}


void mod1(int *n, int *dois, int *tres, int *f)
{
    while( *n%2 ==0 || *n%3 ==0)
    {


            if(*n%2 ==0)
            {
            *n=*n/2;
            ++*dois;
            *f= *f *2;
            }
            if(*n%3 ==0)
            {
            *n=*n/3;
            ++*tres;
             *f= *f *3;
            }

    }

}


void mod3(int *n, int *num, int *f, int *var)
{
if (*n%2 !=0 || *n%3 !=0  || *n%5 !=0 || *n%7 !=0  )
{
*var= *n;
//------
n1=*n;
//--------
*n=*n/ *n;
++*num;
*f= *n * *f ;


}

}
void mod4(int *n, int *on, int *f)
{

if (*n%11 ==0  )
{
*n=*n/ 11;
++*on;
*f= 11* *f ;
}


}
void mod5(int *n, int *treze, int *f)
{

if (*n%13 ==0  )
{
*n=*n/ 13;
++*treze;
*f= 13* *f ;
}


}
void mod6(int *n, int *deze, int *f)
{

if (*n%17 ==0  )
{
*n=*n/ 17;
++*deze;
*f= 17* *f ;
}
}
void mod7(int *n, int *vintrez, int *f)
{
  if (*n%23 ==0  )
{
*n=*n/ 23;
++*vintrez;
*f= 23* *f ;
}
}
void mod8 (int *n, int *vintsete, int *f)
{
  if (*n%19 ==0  )
{
*n=*n/ 19;
++*vintsete;
*f= 19* *f ;
}
}
void mod9 (int *n, int *vintnove, int *f)
{
  if (*n%29 ==0  )
{
*n=*n/ 29;
++*vintnove;
*f= 29* *f ;
}
}
void imprimeFator(int *dois, int *tres, int *ci, int *sete, int * on, int *treze)
{

 int j;
 j=0;

 if(*dois > 0)
    {

        for(j=1; j<=*dois; j++)
        {
            printf("2 * ");
        }
      dois1=2;
    }

    if(*tres > 0)
    {

        for(j=1; j<=*tres; j++)
        {
            printf("3 * ");
        }
       trez1=3;
    }
    if(*ci > 0)
    {

        for(j=1; j<=*ci; j++)
        {
            printf("5 * ");
        }
      cinco1=5;
    }

    if(*sete > 0)
    {

        for(j=1; j<=*sete; j++)
        {
            printf("7 * ");
        }
        sete1=7;
     }

  if(*on > 0)
    {

        for(j=1; j<=*on; j++)
        {
            printf(" 11 *");
        }
        onze1=11;
    }
 if(*treze > 0)
    {

        for(j=1; j<=*treze; j++)
        {
            printf(" 13 *");
        }
      treze1=13;
    }

}
void imprimeFator2(int *deze, int *vintrez, int *vinsete, int *vintnove ,int *del, int *numero )
{

 int j;
 j=0;


     if(*deze > 0)
    {

        for(j=1; j<=*deze; j++)
        {
            printf(" 17 *");
        }
     deze1=17;
    }
    if(*vintrez > 0)
    {

        for(j=1; j<=*vintrez; j++)
        {
            printf(" 23 *");
        }
        vintrez1=23;
    } //agora eh 19
     if(*vinsete > 0)
    {

        for(j=1; j<=*vinsete; j++)
        {
            printf(" 19 *");
        }
    vintsete1=27;
    }
     if(*vintnove > 0)
    {

        for(j=1; j<=*vintnove; j++)
        {
            printf(" 29 *");
        }
       vintnove1=29;
    }

    if(*numero > 0)
    {

        for(j=1; j<=*numero; j++)
        {
            printf("%d  ", *del);
        }
     n1= *del;
    }

 }
 void valoresE(int *n, int *dois, int *tres, int *ci,int *sete, int *on, int *treze, int *deze, int *vintrez, int *vinsete, int *vintnove, int *del)

 {


      int j;
      int a=0;
      int y; // igualador para j em posição do array

     printf("\n");

     for (j=2; j < *n; j++)
     {

   /* printf("%d", dois1 );
    printf("%d", trez1 );
    printf("%d", deze1);
    printf("%d", sete1);
    printf("%d", vintrez1);*/

    if (*dois>0 && j%2==0)
     {
         if( j%2==0)
         {

           printf(" ");
         }
         else
           {

           printf("%d  ", j);
           y=j;
           array[y]= j;
           }

     }

    else if( *tres>0 &&j%3==0 )
    {
        if (j%3==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
    }

    else if(*ci>0 && j%5==0 )
    {
         if (j%5==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
    }
   else if( *sete>0 && j%7==0  )
    {
        if (j%7==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
    }

  //-----------------------------------
    else if (*on> 0 && j%11==0   )
    {
      if (j%11==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
     }
   else if ( *treze> 0 && j%13==0  )
   {
      if (j%13==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
   }
 else  if ( *deze> 0 && j%17==0   )
   {
      if (j%17==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
    }
 else if (*vintrez>0 && j%23==0   )
   {
     if (j%23==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
   }
  else if ( *vinsete > 0 && j%19==0   )
   {
      if (j%19==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
   }
   else if ( *vintnove >0 && j%29==0  )
   {
      if (j%29==0)
        {
        printf(" ");
        }
        else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }
   }
//-----------------------------------
   else if ( *del>0 && n1 !=1)
     {

    //printf(" f esta valendo:
        if (j%2 !=0 || j%3 !=0  || j%5 !=0 || j%7 !=0 || j%11 !=0 || j%13 !=0  || j%17 !=0 || j%23 !=0 || j%19 !=0  || j%29 !=0  )
        {
            if( j%n1==0)
            {

            printf(" ");
            }
          else
        {
           printf("%d  ", j);
            y=j;
           array[y]= j;
        }

        }

     }
//------------------------------

else
{

    printf("%d  ", j);
     y=j;
     array[y]= j;

}

}

 }
/*
void candidateD(int *e, int *v)

int i;

for(i=0; i < SIZE; i++ )
{
    if(  (array[i] * e)%v ==1 )
    {
       printf(" Candidato para d:  %d", array[i])
    }
}

*/
