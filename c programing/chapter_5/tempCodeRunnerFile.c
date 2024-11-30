
#include<stdio.h>
int fibonacci(int);
int fibonacci(int a){
    int i=0;
    while(i<=a){
        i=i+(i-1);
        printf("Fibonacci seris:\n%d\n",i);
        i++;
    }
    
}

int main(){
    fibonacci(45);
}