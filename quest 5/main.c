#include <stdio.h>
#include <stdlib.h>
/*
#define SIZE 10

// quest 1
int whatIsThis(const int b[], int p);

int main(void)
{
int x;
int a[SIZE]={1,2,3,4};

x=whatIsThis(a, SIZE);


printf("x = %d\n", x);

    return 0;
}
int whatIsThis(const int b[], int p)
{
    if(p==1)
    {
        return b[0];
    }
    else
    {
        return b[p-1] + whatIsThis(b, p - 1);
    }
}

*/
/*
// questao2
#define SIZE 10

void someFunction(const int b[], int startIndex, int size);

int main(void)
{
    int a[SIZE]={8,3, 1, 2, 6, 0, 9, 7, 4, 5};

    printf(" Answer is: \n");
    someFunction(a, 0, SIZE);

    printf("\n");

    return 0;
}

void someFunction(const int b[], int startIndex, int size)

{
    if ( startIndex < size)
    {
        someFunction(b, startIndex + 1, size);
        printf("%d", b [ startIndex]);
    }
}
*/
/*
// questao 3
#define SIZE 10

void someFunction(const int b[], int startIndex, int size);

int main(void)
{
    int a[SIZE]={8,3, 1, 2, 6, 0, 9, 7, 4, 5};

    printf(" Answer is: \n");
    someFunction(a, 0, SIZE);

    printf("\n");

    return 0;
}

void someFunction(const int b[], int startIndex, int size)

{
    if ( startIndex < size)
    {
        someFunction(b, startIndex + 1, size);
        if(!((b[startIndex]+1)%7))
        printf("%d", b [ startIndex]);
    }
}
*/
/*
// questao 4
#define SIZE 10
int whatIsThis(const int b[], int p);

int main(void)
{
int x;
int a[SIZE]={1,2, 3, 4, 5, 6, 7, 8, 9, 10};

x=whatIsThis(a, SIZE);


printf("x = %d\n", x);

    return 0;
}
int whatIsThis(const int b[], int p)
{
    if(p==1)
    {
        return 0;
    }
    else if( b[ p -1 ] > 10 )
    {

    return b[p-1] + whatIsThis(b, p -1);

    }
    else
    {
        return whatIsThis(b, p - 1);
    }
}
*/
/*
// questao 6
#define SIZE 10
int whatIsThis(const int b[], int p);

int main(void)
{
int x;
int a[SIZE]={1,2, 3, 4, 5, 6, 7, 8, 9, 10};

x=whatIsThis(a, SIZE);


printf("x = %d\n", x);

    return 0;
}
int whatIsThis(const int b[], int p)
{
    if(p==1)
    {
        return b[0];
    }
    else if( p % 2 - 1 )
    {

    return whatIsThis(b, p -1);

    }
    else
    {
        return b[p-1] + whatIsThis(b, p - 1);
    }
}
*/
// questao 6
/*
#define SIZE 10
int whatIsThis(const int b[], int p);

int main(void)
{
int x;
int a[SIZE]={1,2, 3, 4, 5, 6, 7, 8, 9, 10};

x=whatIsThis(a, SIZE);


printf("x = %d\n", x);

    return 0;
}
int whatIsThis(const int b[], int p)
{
    if(p==1)
    {
        return b[0];
    }

    else
    {
        return b[p-1] + whatIsThis(b, p - 1);
    }
}
*/
/*
// questao 8
#define SIZE 10
int whatIsThis(const int b[], int p);

int main(void)
{
int x;
int a[SIZE]={1,2, 3, 4, 5, 6, 7, 8, 9, 10};

x=whatIsThis(a, SIZE);


printf("x = %d\n", x);

    return 0;
}
int whatIsThis(const int b[], int p)
{
    if(p==1)
    {
        return 0;
    }
    else if(p % 2)
    {
        return whatIsThis(b, p-1);
    }

    else
    {
        return b[p-1] + whatIsThis(b, p - 1);
    }
}
*/
#define SIZE 10
int whatIsThis(const int b[], int p);

int main(void)
{
int x;
int a[SIZE]={1,2, 3, 4, 5, 6, 7, 8, 9, 10};

x=whatIsThis(a, SIZE);


printf("x = %d\n", x);

    return 0;
}
int whatIsThis(const int b[], int p)
{
    if(p==1)
    {
        return b[0];
    }
    else if(b[p-1] > 10)
    {
        return  b[p-1] + whatIsThis(b, p-1);
    }

    else
    {
        return  whatIsThis(b, p - 1);
    }
}
