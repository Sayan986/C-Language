#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter the value:");
    scanf("%d",&n);
    sum=0;
    i=1;
    do{
        sum+=i;
        i++;
    }while(i<=n);
    printf("%d",sum);
    return 0;
}