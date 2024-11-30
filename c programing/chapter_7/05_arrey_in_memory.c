#include<stdio.h>
int main()
{
    int marks[5];
    for(int i=0;i<5;i++){
        printf("Enter the marks of index %d:",i);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++){
        int* ptr=&marks[i];
        printf("The marks address of index %d is: %d\n",i,ptr);
        


    }
}