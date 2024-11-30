//write a code to find leap year in c

#include<stdio.h>
int main(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || (year%400==0)){
        printf("The year is leapyear!");
    }else{
        printf("The year is not leapyear!");
    }
    return 0;
}