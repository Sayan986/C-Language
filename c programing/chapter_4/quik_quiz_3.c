//Write a program to print first ‘n’
// natural numbers using for loop

#include <stdio.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    for (int i =1; i<=num ;){
        printf("%d\n",i);
    }
    return 0;
}
