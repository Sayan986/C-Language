/*
 Try problem 3 using call by value and verify that it does not change the value of 
the said variable. 

call by value
*/
#include<stdio.h>
void change_to_thirty_times(int);
void change_to_thirty_times(int a){
    a=a * 10;
}
int main()
{
    int x=34;
    int j=x;
    printf("the address of x is : %u\n",x);
    printf("the value of x is : %d\n",x);
    change_to_thirty_times(x);
    printf("the value of variable at its address is : %d\n",x);
}