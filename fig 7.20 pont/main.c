#include <stdio.h>
#include <stdlib.h>

int main()
{
   int b[]= {10,20,30, 40};
   int *bPtr = b;
   int i;
   int offset;

    printf("Array b impresso com:\nNotação  de subscrito de array\n");
    for(i=0; i < 4; i++)
    {
        printf("b[%d] = %d\n", i, b[i]);
    }

    printf("\nNotação de ponteiro/offset onde\n"
           "o ponteiro é o nome do array\n");


           for(offset=0; offset <4; offset ++)
           {
               printf(" (b+ %d) = %d\n", offset, *(b+ offset));

           }
            printf(" \nNotação de subscrito de ponteiro\n");

              for(i=0; i < 4; i++)
            {
        printf("bPtr[%d] = %d\n", i, bPtr[i]);
             }

             printf(" \nNotação de ponteiro /deslocamento\n");

              for(offset=0; offset <4; offset ++)
           {
               printf(" *(bPtr+ %d) = %d\n", offset, *(bPtr+ offset));

           }

    return 0;

}
