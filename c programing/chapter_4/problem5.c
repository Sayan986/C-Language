//write a program to sum of n  natural number 
#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter the value:");
    scanf("%d",&n);
    i=1;
    sum=0;
    while(i<=n){

        sum=sum+i;
        i++;

    }
    printf("The  sum is : %d\n",sum);
    return 0;


}