/*
write a program to determine wheather a student has passed or failed . 
to pass a student required a total of 40% and at least 33% in each subject.
Take marks as input from user!
*/
#include<stdio.h>
int main(){
    int bengali, english, math, total_marks;
    printf("Enter the marks in begali:");
    scanf("%d",& bengali);
    printf("Enter the marks in english:");
    scanf("%d",& english);
    printf("Enter the marks in math:");
    scanf("%d",& math);
    total_marks=((bengali+english+math)/3);

    if(bengali<33 || english<33 || math<33){
        printf("You have failed!");
    }else if(total_marks<40){
        printf("You have failed in the exam due to low percentage!");
   
    }else{
        printf("You have passed the exam!");
    }
    return 0;

}