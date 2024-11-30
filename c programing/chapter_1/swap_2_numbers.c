#include<stdio.h>
int main()
{
    int num1,num2,new_number;   //num1=1st number, num2= 2nd number
    printf("Enter the 1st number::");
    scanf("%d",&num1); //%d is used because we defined num1 as an integer
    printf("Enter the 2nd number::");
    scanf("%d",&num2); //%d is used because we defined num2 as an integer
    new_number=num2;
    num2=num1;
    printf("The first number is : %d\n",new_number); 
    // \n is used to add a new line. 
    //if we do not use \n,the next printf output will display in same line.
    printf("The first number is : %d\n",num2);
    return 0;
}
