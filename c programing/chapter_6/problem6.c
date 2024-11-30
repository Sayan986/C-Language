#include<stdio.h>
int main()
{
    int i=57;
    int* ptr1=&i;
    int** ptr2=&ptr1;
    printf("the address of i is : %u\n",&i);
    printf("the value of i is ; %d\n",*ptr1);
    printf("the value of i is ; %d\n",**ptr2)  ;  

}