#include <stdio.h>
int main()
{
    int n,i;
    int firstNum=0,secondNum=1,nextNum;

    printf("Enter the number of terms:");
    scanf("%d",&n);

    printf("Fibonacci series:\n");

    for(i=0;i<n;i++)
    {
        if(i<=1)
        nextNum=i;
        else
        {
            nextNum=firstNum+secondNum;
            firstNum=secondNum;
            secondNum=nextNum;
        }
        printf("%d",nextNum);
    }
    return 0;
}