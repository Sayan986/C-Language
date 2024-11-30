#include<stdio.h>
int main()
{
    char a;
    printf("Enter any charechter which you want to check:");
    scanf("%c",& a);
    if(a>=97 && a<=122){
        printf("The charecter is lowercase..");
    }else if(a>=65 && a<=90){
        printf("the charecter is uppercase...");
    }else{
        printf("This is not an alphabet charecter..");
    }return 0;
}