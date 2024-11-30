#include<stdio.h>
int sum(int,int);
int sum(int a,int b)
{
    printf("The sum of %d nd %d is : %d + %d = %d",a,b,a,b,a+b);
    return 0;
}



int  main(){
    sum(2,4);
}