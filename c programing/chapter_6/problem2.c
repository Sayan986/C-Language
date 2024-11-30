/*Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
a function and print its address. Are these addresses same? Why?*/
#include<stdio.h>
int address(int*);
int address(int* a){
    printf("The value of a : %u\n",a);
    printf("the value at a :%d\n",*a); //value

}
int main(){
    int i=36;
    int* a=&i;printf("the address of i is : %u\n",&i);
    address(a);
}
/*
In summery, th addErees will be same!
*/