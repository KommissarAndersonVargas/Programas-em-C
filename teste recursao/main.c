#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1;
    int resul;
    printf("Digite um numero\n");
    scanf("%d",&n1);
    resul= fatorial(n1);

    printf("fatorial eh: %d", resul);
    return 0;
}
int fatorial(int num)
{
    int i=1;
    int j;
    int re1;
    re1=num;
    j=num-1;


    while (i!= num)

    {
        re1= (re1)*(j);
        // se for 5 --- 5.4=20; 20.3=60; 60.2=120
        //5.4.3.2.1=120

        j--;
        i++;
    }
    return re1;
}
