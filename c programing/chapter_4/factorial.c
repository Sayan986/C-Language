#include<stdio.h>
int main()
{
    int i,n,factorial;
    printf("Enter the number:");
    scanf("%d",&n);
    i=1;
    factorial=1;
    while (i<=n)
    {
       factorial=factorial*i;
       i++;
    }
    printf("The factorial of %d is : %d",n,factorial);
    return 0;
    
}