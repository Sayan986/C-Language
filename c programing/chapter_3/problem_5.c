/*write a program to find the gratest of 4 number!
a,b,c,d;
a>b & a>c & a>d--->a is the gratest
b>a & b>c & b>d ---> b is the gratest
c>a & c>b 7 c>d ----> c is the gratest
d>a & d>b & d>c -----> d is the gratest

*/
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("enter third number:");
    scanf("%d",&c);
    printf("enter fourth number:");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("%d is the gratest number! ",a);
    }else if(b>a && b>c && b>d){
        printf("%d is the gratest number! ",b);
    }else if(c>a && c>b && c>d){
        printf("%d is the gratest number! ",c);
    }else if(d>a && d>b && d>c){
        printf("%d is the gratest number! ",d);

    }
    return 0;
}