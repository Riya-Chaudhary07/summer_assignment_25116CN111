#include <stdio.h>
int main()
{
    long int binary;
    int decimal=0, rem, base=1;

    printf("Enter a binary number:");
    scanf("%d",&binary);

    while(binary>0)
    {
        rem=binary%10;
        decimal=decimal+rem*base;
        base=base*2;
        binary=binary/10;
    }

    printf("Decimal number=%d",decimal);

    return 0;
}