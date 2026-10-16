#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;
    printf("Meu nome eh: Anderson Roberto Machado de Vargas\n");
    for(x=1;x<=10;x++)
    {
        if(x==5)
        {
            break;
        }
        printf("%d",x);
    }
    printf("\nSaiu do loop em x==%d\n",x);
    return 0;
}
