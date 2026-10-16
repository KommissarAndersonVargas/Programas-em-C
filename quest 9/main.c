#include <stdio.h>
#include <stdlib.h>
// quest 1
/*
int main(void)
{
    int a;
    int *Ptr1, *Ptr2;
    a=7;

    Ptr1= &a;
    Ptr2= Ptr1 + 16;

    printf(" %p\n", Ptr2 - Ptr1);

    return 0;
}
*/
//quest 2
/*
void calcula1(int *nPtr);
int calcula2(int num);

int main(void)
{
    int n =3;

    calcula1(&n);
    n= calcula2(n);
    printf("%d\n",n);

    return 0;
}

void calcula1(int *nPtr)
{
    *nPtr= *nPtr * *nPtr;
}
int calcula2(int num)
{
    return (num * num);
}
*/
/*
// quest 3
void calcula1(int *nPtr);
void calcula2(int *nPtr);

int main(void)
{
    int  n = 3;

    calcula1(&n);
    calcula2(&n);
    printf("%d\n", n);

    return 0;
}
void calcula1(int *nPtr)
{
    *nPtr= *nPtr / *nPtr;
}
void calcula2(int *nPtr)
{
    *nPtr =  *nPtr  *  *nPtr *  *nPtr;
}

*/
/*
// quest 4
int calcula1(int *nPtr);
int calcula2(int num);

int main(void)
{
    int a;
    int n = 3;

    a = n; // a vale 3
    n = calcula1(&n) / a;
    n = calcula2(n);
    printf("%d\n",n);

    return 0;
}
int calcula1(int *nPtr)
{
    *nPtr = *nPtr * *nPtr;
    return (*nPtr);
}
int calcula2(int num)
{
    return (  num * num );
}
*/
/*
// quest 5
int main(void)
{
    int a, b;
    int *Ptr1, *Ptr2;

    a = 7;
    b = 10;
    Ptr1 = &a;
    Ptr2 = &b;


    printf("%d\n", *Ptr2 - *Ptr1);
    return 0;
}
*/
/*
//quest 6
void calcula (int *nPtr);

int main(void)
{

    int n = 3;

    calcula( &n );
    printf("%d\n", n);

    return 0;
}
void calcula( int *nPtr)
{
    *nPtr =  *nPtr *  *nPtr  *  *nPtr;
}
*/
/*
//quest7

int main(void)
{

    int a, b;
    int *Ptr1, *Ptr2;

    a=7;
    b=10;
    Ptr1= &a;
    Ptr2= &b;

    printf("%d\n", *Ptr2 - 2**Ptr1);

    return 0;
}
*/
int main(void)
{

    int a, b;
    int *Ptr1, *Ptr2;

    a=7;
    b=10;
    Ptr1= &a;
    Ptr2= Ptr1;

    printf("%d\n", *Ptr2 - *Ptr1);

    return 0;
}
