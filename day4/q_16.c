#include <stdio.h>
int main()
{
    int start, end, num;
    int a, b ,c, sum;

    printf("Enter the starting number:");
    scanf("%d",&start);

    printf("Enter the ending number:");
    scanf("%d",&end);

    printf("Armstrong numbers are:\n");

    for(num=start;num<=end;num++)
    {
        a=num/100;
        b=(num/10)%10;
        c=num%10;

        sum=(a*a*a)+(b*b*b)+(c*c*c);

        if(sum==num)
        {
            printf("%d",num);
        }
    }
    
    return 0;
}