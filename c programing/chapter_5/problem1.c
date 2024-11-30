//program to find the avg of 3 num uing function
#include<stdio.h>
int avg(int,int,int);
int avg(int a, int b,int c){
    int d=(a+b+c)/3;
    printf("the avg off %d, %d & %d are : %d",a,b,c,d);
}

int main()
{
    avg(2,4,6);
}


