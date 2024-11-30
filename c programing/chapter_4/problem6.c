#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter the value:");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;

    }
    printf("The sum is :%d",sum);
    return 0; 


}