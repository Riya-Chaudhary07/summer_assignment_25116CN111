#include <stdio.h>

int armstrong(int n)
{
    int sum=0, rem, temp=n;

    while(n>0)
    {
        rem=n%10;
        sum+sum+(rem*rem*rem);
        n=n/10;
    }
    return(sum==temp);
}

int main()
{
    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    if(armstrong(num))
    printf("Armstrong Number");

    else
    printf("Not an Armstrong Number");

    return 0;
}