//print multiplication table in rev order using for loop
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the value:");
    scanf("%d",&n);
    for (i=10;i;i--){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}