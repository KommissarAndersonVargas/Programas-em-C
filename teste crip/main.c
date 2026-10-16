
#include <stdlib.h>

#include <stdio.h>

#include<math.h>
#include<time.h>
int main(void)

{

    //obtain digits of number



    int encrypted, decrypted;

    int i, choice, value;

    int data, encpData, decpData;

    int digit1, digit2, digit3, digit4;



    printf( "enter (1) to encrypt (2) to decrypt\n");

    scanf( "%d", &choice);



    if  ( choice == 1 )

    {

    printf ("Enter four-digit integer to be encrypted: ");

    scanf ("%d", &data);



    // Replace each digit with the result of adding 7 to the digit and getting

    // the remainder after dividing the new value by 10



    for(i=3;i>=0;i--)



    encpData = value = data;
    digit1 = ((value/1000)+7)%10;

    value = value%1000;

    digit2 = (value/100+7)%10;

    value = value%100;

    digit3 = (value/10+7)%10;

    value = value%10;

    digit4 = (value+7)%10;



    encrypted = digit3*1000+digit4*100+digit1*10+digit2; //swap digit1-digit3 and digit2-digit4; generate result number

    printf("Encrypted value is %d", encrypted);

    }



    else

    {

    printf ("Enter four-digit integer to be decrypted: ");

    scanf ("%d", &data);



    decpData = value = data;

    digit1 = (value/1000+10)-7;

    value = value%1000;

    digit2 = (value/100+10)-7;

    value = value%100;

    digit3 = (value/10+10)-7;

    value = value%10;

    digit4 = (value+10)-7;

    decrypted = digit3*1000+digit4*100+digit1*10+digit2; //swap digit1-digit3 and digit2-digit4; generate result number

    printf("Decrypted value is %d", decrypted);

    }



    return 0;
}

