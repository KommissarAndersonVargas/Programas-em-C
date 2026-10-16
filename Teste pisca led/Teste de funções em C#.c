#include <stdio.h>
#include <stdlib.h>
#define ev 4

int main()
{
    printf("\n valor de ev eh: %ev");
    float calculosoma( float x, float y);
    float area= calculosoma(12.0,4.0);
    printf("\nCalculo soma eh: %f", area);
    return 0;

}
float calculosoma( float x, float y)
{
    float area;
    area= x+y;
}
