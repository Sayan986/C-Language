#include<stdio.h>
int main(){
    int i=40;
    int *j;
    j=&i;//stores the address of i in verible j
    printf("The address of i is :%p\n",&i);//display the address of i
    printf("The address of i is :%u\n",&i); //display the address f i in intezer format
    printf("The address of i is :%p\n",j);
    printf("The address of i is :%u\n",&j); //display the address of i  in intezer format
    printf("The address of i is :%d",*(&i));//display the value in its address
    printf("The address of i is :%d",(*j));//display the value of i , in the addresss
    return 0;
}