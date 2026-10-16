#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;
    printf("\nDigite uma nota");
    scanf("%i",&nota);
    nota>=60 ? printf("aprovado\n"): printf("Reprovado\n");
    return 0;
}
