#include <stdio.h>
#include <stdlib.h>

void useLocal (void);
void useStaticLocal(void);
void useGlobal(void);

int x=1;

int main(void)
{
    int x=5;

    printf("x local no escopo externo de main  eh %d\n",x);
    {
     int x=7;

    printf("x local no escopo interno de main eh %d\n", x);

    }

    printf("x local no escopo externo de main eh %d\n", x);

    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();

    printf( "\nx local em main eh %d\n", x);

    return 0;
}

void useLocal(void)
{
    int x= 25;

    printf("\nx local em useLocal eh %d apos entar em useLocal\n ",x);
    x++;
    printf("x local em useLocal eh %d antes de sair de useLocal\n",x);

}
void useStaticLocal(void)
{
    static int x=50;

    printf("\nx estatica local eh %d na entrada de useStaticLocal\n",x);
    x++;
    printf(" x estatica local eh %d na saida de useStaticLocal\n",x);
}
void useGlobal()
{
    printf ("\nx global eh %d na entrada de useGlobal\n",x);
    x*=10;
    printf("x global eh %d na saida de useGlobal\n",x);
}

