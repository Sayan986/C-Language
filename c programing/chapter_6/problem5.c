/* Write a program using a function which calculates the sum and average of two 
numbers. Use pointers and print the values of sum and average in main(). 
*/
#include<stdio.h>
int* sum(int,int);
int* sum(int a, int b){
    int s=a+b;
    int* ptr=&s;
    printf("The sum is : %d\n",s);
    return ptr;
}
//float* avg(int ,int);
float* avg(int a, int b){
    float avgg=(a+b)/2.0;
    float*ptr = &avgg;
    printf("the avg is : %.2f\n",avgg);
    return ptr;

}

int main()
{
    int a =5;
    int b=10;
    int* ptr1;
    ptr1=sum(a,b);
    float* ptr2;
    ptr2=avg(a,b);

    printf("the addresss of sum is : %u\nThe address of average is : %u\n",ptr1,ptr2);

}