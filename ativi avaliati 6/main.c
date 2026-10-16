#include <stdio.h>
#include <stdlib.h>
/*
// quest 1
int main()
{
    int a[5][2] ={   {1,2}, {3,4}, {5,6}, {7,8}, {9,10}  };
    int i, j, x=0;

    for(i=0; i<2  ; i++)
    {
        for(j=0; j< 2; j++)
        {
            x += a[i][j];
        }
    }

    printf("x = %d\n", x);

    return 0;
}
*/
/*
// quest 2
int main()
{
    int a[5][2][2]={   {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}   };
    int i, j, k, x = 0;

    for(i=0; i < 3; i++)
    {
        for(j=0; j < 2; j++)
        {
            for(k=0; k < 2 ; k++)
            {
                x += a[i][j][k];
            }
        }
    }

     x -= a[i-1][j-1][k-1];
    printf("x = %d\n", x);

    return 0;
}
*/
/*
// quest 3
int main()
{
    int a[5][2] = {   {1,2}, {3,4}, {5,6}, {7,8}, {9,10}  };
    int i, j, x = 0;

    for(i = 4; i >= 1; i--)
    {
        for(j=0; j < 2; j++)
        {
            x +=a[i][j];
        }
    }


    printf("x = %d\n", x);

    return 0;
}
*/
/*
//quest 4
int main()
{
    int a[5][2] = {   {1,2}, {3,4}, {5,6}, {7,8}, {9,10}  };
    int i, j, x = 0;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 2; j++)
        {
            x +=a[i][j];
        }
    }


    printf("x = %d\n", x);

    return 0;
}
*/
// quest 6
/*
int main()
{
    int a[5][2][2]= {      {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}       };
    int i, j, k, x=0;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k =0; k < 2; k++)
            {
                x += a[i][j][k];
            }
        }
    }

    printf("x = %d\n", x/42);

    return 0;
}
*/
/*
// quest 7
int main()
{
    int a[5][2][2]= {      {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}       };
    int i, j, k, x=0;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k =0; k < 2; k++)
            {
                x += a[i][j][k];
            }
        }
    }

    printf("x = %d\n",a[i/2][j/2][k/2] );

    return 0;
}
*/
int main()
{
    int a[5][2][2]= {      {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}       };
    int i, j, k, x=0;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k =0; k < 2; k++)
            {
                x += a[i][j][k];
            }
        }
    }

    printf("x = %d\n",a[i-2][j-2][k-2] );

    return 0;
}
