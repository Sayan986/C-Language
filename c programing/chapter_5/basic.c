#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Eer he second  number :");
    scanf("%d",&b);
    //formula
    if(a==b){
        printf("The two numbers are same !");
        //return  0;
    }
    else
    {
        a=a+b;
        b=a-b;
        a=a-b;
        printf("The first number is : %d \nSecondd number is : %d ",a,b);


    }
    return 0;
    

    

}