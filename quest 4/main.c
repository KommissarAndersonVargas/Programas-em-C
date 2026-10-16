#include <stdio.h>
#include <stdlib.h>
// quest 1
/*
int main(void)
{
    int n [11];
    int i, x=0;


    for( i=0; i<11; i++)
    {
        n[i]=i;
    }
    for( i=0; i<11; i++)
        {
            x+=n[i];
        }

    printf("x= %d\n", x);

    return 0;
}
*/
// quest 2
/*
int main(void)
{
     int n[11]= {0};
    int i, x=0;


    for( i=0; i<5; i++)
    {
        n[i]=i;
    }
    for( i=0; i<11; i++)
        {
            x += n[i] ;
        }

    printf("x= %d\n", x);

    return 0;
}
*/
//questao 3
/*
int main()
{
     int n[11]= {0};
    int i, x=0;


    for( i=1; i<11; i++)
    {
        n[i]= i % 2 ? i+1 : i-1;
    }
    for( i=0; i<11; i++)
        {
            x += n[i] % 2 ? n[i] : 0 ;
        }

    printf("x= %d\n", x);

    return 0;
}
*/
// questao 4
/*
int main()
{
     int n[11];
    int i, x=0;


    for( i=0; i<11; i++)
    {
        n[i]= i % 2 ? i : 0;
    }
    for( i=0; i< 9; i++)
        {
            x += n[i] % 2 ? n[i] : 0 ;
        }

    printf("x= %d\n", x);

    return 0;
}
*/
// questao 5
/*
int main (void)
{
    int n[11];
    int i, x=0;

    for(i = 0; i<11; i++)
    {
        n[i]= i % 2 ? i : 0;
    }

    for(i = 0; i < 11; i++)
    {
        x += n[i] % 2 ? 0 : n[i];
    }

    printf("x = %d\n", x);

    return 0;

}
*/
// questao 6
/*
int main(void)
{
    int n[11];
    int i, x = 0;

    for(i = 0; i < 11; i++)
    {
        n[i] = i;
    }

    for( i = 0; i < 11; i++)
    {
        x += n[i] % 2 ? 0 : n[i];
    }
     printf("x = %d\n", x);

     return 0;

}
*/
// questao 7
/*
int main(void)
{
    int n[11];
    int i, x=0;

    for(i = 0; i < 11; i++)
    {
        n[i] = i;
    }
    for(i = 0; i < 11; i++ )
    {
        x += n[i] % 2 ? n[i]: 0;
    }

    printf("x = %d\n", x);

    return 0;

}
*/
int main(void)
{
    int n[11];
    int i, x = 0;

    for (i = 0; i < 11; i++)
    {
        n[i] = i;
    }
    for(i = 11; i > 5; i-- )
    {
        x += n[i];
    }

    printf("x = %d\n", x);

    return 0;
}
