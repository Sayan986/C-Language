/*
Write a program to find the grade of students 
   90-100-->A
   80-90--->B
   70-80--->C
   60-70--->D
   50-60--->E
   <50----->F                                                                                          */
#include<stdio.h>
int main()
{
    int marks;  
    printf("Please enter your marks:");
    scanf("%d",&marks);
    
    if(marks>=90 && marks<=100){
        printf("Your grade is : A");
    }else if (marks>=80 && marks <90){
        printf("Your grade is : B");
    }else if(marks>=70 && marks<80){
        printf("Your grade is :C");
    }else if(marks>=60 && marks <70){
        printf("Your grade is :D");
    }else if(marks>=50 && marks <60){
        printf("Your grade is : E");
    }else if(marks <50){
        printf("Your grade is :F");
    }
    return 0;
    
}