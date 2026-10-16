#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void embaralha ( int wbaralho[][13]);
void distribui (const int wbaralho[][13], const char *wFace[],const char *wNaipe[]);


int main(void)
{
    const char *naipe[4]={ "copas", " ouros", " Paus ", " Espadas " };

    const char *face[13] =
    { " Ás", "Dois ", " Tres", " Quatro", " Cinco", "Seis", "Sete", "Oito", "Nove", "Dez",
    "Valete",  "Dama", "Rei" };


    int baralho [4][13] = {0};


     srand(time(0));

     embaralha (baralho); // usar função embaralha
     distribui(baralho, naipe, face );



    return 0;
}
void embaralha ( int wbaralho[][13])
{
    int linha;
    int coluna;
    int carta;

    for(carta= 1; carta <= 52 ; carta ++ )
    {
        do
        {
            linha= rand() %4;
            linha= rand() %13;
        } while(wbaralho[linha][coluna] != 0);

        wbaralho[linha][coluna]= carta;
    }
}
void distribui (const int wbaralho[][13], const char *wFace[],const char *wNaipe[])
{
    int carta;
    int linha;
    int coluna;

    for( carta =1; carta <= 52; carta ++)
    {
        for (linha=0; linha <= 3; linha ++)
        {
            for(coluna=0; coluna <= 12; coluna++)
            {
                if(wbaralho[linha][coluna]  == carta)
                {
                    printf("%5s of %-8s%c", wFace[coluna], wNaipe[linha], carta % 2 == 0 ? '\n' : '\t');
                }
            }
        }
    } // end of for principal
} // end of function

