#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter the value:");
    scanf("%d",&n);
    sum=1;
    for (i=1;i<=n;++i){
        sum=sum*i;

    }
    printf("The value is : %d",sum);


}