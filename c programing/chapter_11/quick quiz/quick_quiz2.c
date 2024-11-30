//: Write a program to create an array of size n using calloc where n is an 
//integer entered by the user.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the value :");
    scanf("%d", &n);
    int *ptr;
    ptr=(int*) calloc (n, sizeof(int));

    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=19;
    ptr[3]=12;
    printf("%d\n%d\n%d\n%d\n", ptr[0], ptr[1], ptr[2], ptr[3]);
    return 0;
}