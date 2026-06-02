#include <stdio.h>
int main()
{
    int number,rev=0;

    printf("Enter a number:");
    scanf("%d",&number);

    while(number>0)
    {
        rev=rev*10+number%10;
        number=number/10;
    }

    printf("Reversed number=%d",rev);

    return 0;
}