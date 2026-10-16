#include <stdio.h>
#include <stdlib.h>

int main()
{
int M[7][4];
 int v[10] = {3, 2, 4, 1, 5, 0, 6, 1, 4, 20};
   int i;
  int j;

  printf("QUE LETRA EH ESSA? \n\n");

  for(i = 0; i < 4; i++)
    { for(j = 0; j < 7; j++) {M[i][j] = 0;
if(i == 0 && j == v[0])
{ M[i][j] = 1; }
if(i == 1 && (j == v[1] || j== v[2]))
    { M[i][j] = 1; }
    if(i == 2 && (j == v[3] || j == v[1] || j == v[0] || j == v[2] || j == v[4]))
        { M[i][j] = 1; }
    if(i == 3 && (j == v[5] || j == v[6]))
        { M[i][j] = 1; }
    printf(" %d ", M[i][j]); }
    printf("\n"); }
    return 0;
}
/*

int main()
 {
     int a;
      int b;
      int c;
       int d;
        int e;
         printf("QUE LETRA EH ESSA? \n\n");
          a = (11*10000) + (2222/2);
          printf("%d\n",a);
          b = (10 * 3515 + 524623 - 2141241 + 16 * 52535)/(10 * 3515 + 524623 - 2141241 +16 * 52535);
          printf("%d\n", b);
          c = (5635466566 - 5635355455);
           printf("%d\n", c);
           d = (10000000000000000000001 - 10000000000000000000000);
            printf("%d\n", d); e = (22*100 - 14000 + 100000 * 6 - 488889 - 22*100 + 14000);
             printf("%d\n", e);
             return 0;
             }

            int main()
            {
            unsigned int b;
            unsigned int a = 0x3333333333;
            b = ~a;
             printf("QUAL LETRA APARECE?\n\n");
            printf ("%x", b);
             return 0;
             }
             */
