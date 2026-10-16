#include <stdio.h>
#include <stdlib.h>
#define ai 3
void tryModifyArray( const int b[]);

int main()
{
    int a[]={10,20,30};

    tryModifyArray(a);


    printf("%d %d %d", a[1], a[2], a[3]);

    return 0;
}
void tryModifyArray(  const int b[])
{
     b[0]/=2;
     b[1]/=2;
     b[2]/=2;
}
