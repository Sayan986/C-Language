//print the sum of n numbers 

#include<stdio.h>
int sum_natural(int);
int sum_natural(int a){
    if(a==1){
        return 1;
    }else{
        return sum_natural(a-1)+a;
    }
}

int main()
{
    int b;
    printf("Enter the number :");
    scanf("%d",&b);
    printf("The sum of the numbers are :%d",sum_natural(b));
}