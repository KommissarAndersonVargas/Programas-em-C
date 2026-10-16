#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
int main()
{
    int array[]={11, 11, 11, 12, 69, 69, 89, 78, 90,90 ,
             45, 45, 67, 67, 81, 82, 83, 84, 85, 86 }; //MUDAR O ARRAY PORQUE A MAIORIA EH DIFERNTE, O QUE VAI CONTRA A CONDIÇÃO O ORGINAL
    int i;
    int same;
    same=0;

    for(i=0; i<20 ; i++)
    {
        if(array[i] !=same )
        {
            same= array[i];
            printf("%d\n", array[i]);
        }
        else
        {
            continue;
        }
    }

    return 0;
}
*/
int main()
{
    int i;
    int j;
    int same;
    int a;
    int array[20]={0};


    //srand(time (NULL));

    for(i=0; i<20; i++)
    {
        srand(time (NULL));

        a= 1+(rand()%6);

        array[i]= a;

        printf("%d\n", array[i]);
    }

     for(j=0; j<20 ; j++)
    {
        if(array[i] !=same )
        {
            same= array[i];
            printf("%d\n", array[i]);
        }
        else
        {
            continue;
        }
    }

    return 0;
}
