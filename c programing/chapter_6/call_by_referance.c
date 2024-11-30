#include<stdio.h>
int sum(int*,int *);
int sum(int *a, int *b){
    *a=10;
    return (*a+*b);
}
int main()
{
    int x=1,y=6;
    printf("the sum is :%d\n",sum(&x,&y));
    printf("the value of x is :%d",x);
}