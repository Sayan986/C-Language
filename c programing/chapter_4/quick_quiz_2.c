//write a program to print the first n natural number using do-wille loop

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value:");
    scanf("%d",&n);
    i=0;
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=n);
    return 0;
    
}