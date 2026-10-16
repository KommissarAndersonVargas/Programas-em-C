#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    for(x=0;x<10;++x)
    {
        if(x==2)
        {
            continue;
        }
        if(x==8)
        {
            break;
        }

    printf("%i\n",x);
    }
    return 0;
}
