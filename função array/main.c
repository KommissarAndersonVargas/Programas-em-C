#include <stdio.h>
#include <stdlib.h>

int modifica (int a[], int space);


int main(void)
{
    int c []={2,4, 6, 8};
    int i;
     modifica(c, 4);

          for (i=0; i<4; i++)
          {
              printf("%d\n", c[i]);
          }


    return 0;
}
int modifica (int a[], int space)
{
    int i;

    for (i=0; i<=4; i++)
    {
        a[i]= a[i]*2;
    }
}
