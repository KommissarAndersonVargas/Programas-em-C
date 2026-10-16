#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
char stringcopy[100];
void codiletras(char string[], char string2[]);
void decodyletras(char string[]);

void codiletras(char string[], char string2[])
{
    int i;
    srand(time(NULL));
    string[100];

    printf("Digite uma string: ");

    gets(string);
    string2[100]=string[100];
    stringcopy[100]= string2[100];

    strcpy(string2, string);
    int l= strlen(string);

    for(i=0; i<strlen(string); i++)
    {
        stringcopy[i]= string[i];
    }

   for(int i=0; i<l; i++)
   {
       if(string[i]== 'a' ||string[i]== 'e'||string[i]== 'i' ||string[i]== 'o' || string[i]== 'u')
       {
         int a;
          a= 1+(rand()%99);

            string[i]= string[i]-a;
       }
       if(string[i]== 'g' ||string[i]== 'h'||string[i]== 'j' ||string[i]== 'm' || string[i]== 'n')
       {
          int a;
          a= 1+(rand()%99);

            string[i]= string[i]-a;
       }
       if(string[i]== 'd' ||string[i]== 'f'||string[i]== 'b' ||string[i]== 'p' || string[i]== '1')
       {
          int a;
          a= 1+(rand()%99);

            string[i]= string[i]-a;
       }
   }
   printf("\n\n A string codificada eh: ");
   printf("%s", string);
   printf("\n\n");
}


 void decodyletras(char string[])
 {
     string[100];
     int l= strlen(string);
     int i;

   for(i=0; i<l; i++)
   {


        if( string[i] != stringcopy[i])
        {
            string[i] = stringcopy[i];
        }

   }

    printf("\n\nA string decodificada eh: %s\n", string  );


 }

int main()
{

    char string[100];
    char string2[100];
    int i;


     codiletras(string,string2);
     decodyletras(string);


    return 0;
}

/*
// CASO NAO DE CERTO DE IMPLEMENTAR AS FUNÇÕES NO CODIGO SECUNDARIO DO TRABALHO USAR A FUNÇÃO INTEIRA
int main()
{

    char string[100];
    char string2[100];
    char stringcopy[100];
     int ;

    srand(time(NULL));

    printf("Digite uma string: ");

    gets(string);


    strcpy(string2, string);
    int l= strlen(string);

    for(i=0; i<strlen(string); i++)
    {
        stringcopy[i]= string[i];
    }

   for(int i=0; i<l; i++)
   {
       if(string[i]== 'a' ||string[i]== 'e'||string[i]== 'i' ||string[i]== 'o' || string[i]== 'u')
       {
         int a;
          a= 1+(rand()%99);

            string[i]= string[i]-a;
       }
       if(string[i]== 'g' ||string[i]== 'h'||string[i]== 'j' ||string[i]== 'm' || string[i]== 'n')
       {
          int a;
          a= 1+(rand()%99);

            string[i]= string[i]-a;
       }
       if(string[i]== 'd' ||string[i]== 'f'||string[i]== 'b' ||string[i]== 'p' || string[i]== '1')
       {
          int a;
          a= 1+(rand()%99);

            string[i]= string[i]-a;
       }
   }
   printf(" A string codificada eh: %s\n", string  );

   for(int i=0; i<l; i++)
   {


        if( string[i] != stringcopy[i])
        {
            string[i] = stringcopy[i];
        }

   }

    printf(" A string decodificada eh: %s\n", string  );


    return 0;
}
*/
