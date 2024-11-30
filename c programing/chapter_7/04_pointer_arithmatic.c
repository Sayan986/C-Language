#include<stdio.h>
int main(){
    int i=20;
    int* ptr=&i;
    printf("the address of a is : %u\n", &i);
    printf("the address of a is : %u\n", ptr);
    ptr++;
    printf("the address of a is : %u\n", ptr);
    

}