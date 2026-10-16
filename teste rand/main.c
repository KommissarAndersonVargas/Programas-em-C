#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i;
    srand(67);
    for(i=1; i<=10; i++)
    {
        printf("%d   ", 1+(rand()%6));

        if(i%5==0)
        {
            printf("\n");
        }
    }

    return 0;
}
