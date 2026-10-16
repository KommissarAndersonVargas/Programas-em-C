#include <stdio.h>
#include <stdlib.h>
int area(int *ptr, int *ptr2, int *ptr3);


int main()
{
    int a;
    int b;
    int c=0;
    int re;

    printf("Digite um numero para a\n");
    scanf("%d", &a);
    printf("Digite um numero para b\n");
    scanf("%d", &b);

    re= area(&a,&b, &c);
    printf("A area eh: %d\n", re);
    printf("c vale: %d\n", c);
    printf("c vale: %d\n", c);

    return 0;
}
int area(int *ptr, int *ptr2, int *ptr3)
{


    *ptr3 = *ptr  *  *ptr2;

    return *ptr3;
}
