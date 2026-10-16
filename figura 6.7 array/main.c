#include <stdio.h>
#include <stdlib.h>
#define RESPONSE_SIZE 40
#define FREQUENCY_SIZE 11

int main()
{
    int answer;
    int rating;

    int frequency [FREQUENCY_SIZE]= {0};

    int responses[RESPONSE_SIZE]={1,2,6,4,8,5,9,7,8,10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8,
     6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};
    for (answer=0; answer< RESPONSE_SIZE; answer++)
    {
        ++frequency [responses [answer]];
    }
    printf("%s%17s\n","Avaliação", "Frequencia");

    for(rating = 1; rating < FREQUENCY_SIZE; rating++)
    {
        printf("%6d%17d\n", rating, frequency[rating]);
    }


    return 0;
}
/*
int main()

{
int n[20]={10, 5, 9, 9, 9, 8, 7, 1, 2, 3, 4, 4, 4, 4, 4, 2, 2, 2, 2, 3};
int i;
int j;
int fre[10]={0};
int a;


for (i=0; i<20; i++)
{
    ++fre[ n[i] ];

}

for (j=0; j<10; j++)
{
    printf("%d ocorre %d\n",j, fre[j]);
}
return 0;
}
*/
