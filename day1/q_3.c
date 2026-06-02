#include <stdio.h>
int main()
{
    int number,i;
    int factorial=1;

    printf("Enter a number:");
    scanf("%d",&number);

    if(number<0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
       for(int i=1;i<=number;i++)
       {
           factorial=factorial*i;
       }

    printf("The factorial of %d = %d",number,factorial);
    }
    
    return 0;
}

