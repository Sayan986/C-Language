#include<stdio.h>
int main()
{
    int a,b,c; //declare a,b,c as intezer numbers!
    printf("Enter the 1st number:");
    scanf("%d",& a);
    printf("Enter the 2nd number:");
    scanf("%d",& b);
    printf("Enter the 3rd number:");
    scanf("%d",& c);
    if(a==b & b==c){
        printf("All numbers are equal!");
    }else{
    
        printf("All numbers are not equal!");
    }
    
    return 0;




    
}