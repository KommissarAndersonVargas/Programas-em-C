#include <stdio.h>
#include <stdlib.h>

void printCharacters(const char *sPtr);

int main()
{
char string[]= "imprime caracteres de uma string";

    printf(" A string eh: \n");
    printCharacters(string);
    printf("\n");


    return 0;
}
void printCharacters(const char *sPtr)
{

    for(; *sPtr != '\0'; sPtr++)
    {
            printf("%c",*sPtr);

    }



}
