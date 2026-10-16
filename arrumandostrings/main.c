#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//void ArumaString( char st[], char limpeza[]);

void RemoverSpace(char str[]);
void RemovePont1(char str[]);
void RemovePont2(char str[]);
void RemovePont3(char str[]);
void RemovePont4(char str[]);
void RemovePont5(char str[]);
void RemovePont6(char str[]);
void RemovePont7(char str[]);
void RemovePont8(char str[]);
void RemovePont9(char str[]);
void RemovePont10(char str[]);
void RemovePont11(char str[]);

void RemovePont11(char str[])
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
void RemovePont10(char str[])
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
void RemovePont9(char str[])
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


void RemovePont8(char str[])
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

void RemovePont7(char str[])
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


void RemovePont6(char str[])
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



void RemovePont5(char str[])
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


void RemovePont4(char str[])
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
void RemovePont3(char str[])
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

void RemovePont2(char str[])
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
void RemovePont1(char str[])
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
void RemoveSpace(char str[]){
    int count=0, i;

    for(i=0;str[i];i++){
        if(str[i]!=' ' )
            {
            str[count++]=str[i];
                 }
    }
    str[count]=0;

}
int main(){
    char str[100];
    printf(" Digite a string\n");
    gets(str); // leitura de carcter
    int i;


     for(i=0; str [i] != '\0'; i++)
     {
         printf("%c", str[i]);
         printf("\n");
     }

printf("-------------------------------- Fim-----------------------------\n");

    RemoveSpace(str);
    RemovePont1(str);
    RemovePont2(str);
    RemovePont3(str);
    RemovePont4(str);
    RemovePont5(str);
    RemovePont6(str);
    RemovePont7(str);
    RemovePont8(str);
    RemovePont9(str);
    RemovePont10(str);
    RemovePont11(str);
    puts(str);
    return 0;
}
