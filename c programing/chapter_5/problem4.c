//function to calculate the n th element of fibonacci 

#include<stdio.h>
int fibonacci(int);
int fibonacci(int a){
    if(a==1 || a==2){
        return a-1;
    }else{
        return fibonacci(a-1)+fibonacci(a-2);
    }
    }
    


int main(){
    int b;
    printf("EEnter the value:");
    scanf("%d",&b);
    printf("the fibonacci is : %d",fibonacci(b));
}