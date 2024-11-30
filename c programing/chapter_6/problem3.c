/*Write a program to change the value of a variable to ten times of its current 
value. */
#include<stdio.h>
void change_to_thirty_times(int*);
void change_to_thirty_times(int* a){
    *a=*a * 10;
}
int main()
{
    int x=34;
    int* j=&x;
    printf("the address of x is : %u\n",&x);
    printf("the value of x is : %d\n",*j);
    change_to_thirty_times(&x);
    printf("the value of variable at its address is : %d\n",*j);
}