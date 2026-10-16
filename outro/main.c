#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ArumaString( char st[], char limpeza[]);

int main()
{
    char str1[5];
    char strArumada[5];
     int i;

    printf("Digite uma string\n");
    scanf("%s",&str1);
    strlen(str1);

    ArumaString(str1, strArumada);
/*

     for(i=0; strlen(strArumada) ;i++  )
    {
        printf("%c", strArumada[i]);
        printf("\n");
    }

*/
    return 0;

}
void ArumaString( char st[], char limpeza[])
{
    int i;
    int j=0;

    for(i=0; i < strlen(st) ; i++ )
    {
        if(   isalpha(st[i] ) )
        {
            limpeza[j]= st[i];
            j++;
        }

       }
       for(i=0; strlen(limpeza) ; i++ )
       {
           printf("%c",limpeza[i]);
           printf("\n");
       }
}
