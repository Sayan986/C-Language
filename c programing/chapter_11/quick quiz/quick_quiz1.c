//write a programmer to store 5 floating numbers

#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a = 3;
    float *ptr;
    ptr=(float *) malloc (a * sizeof (float));
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=23;
    printf("%f\n%f\n%f\n", ptr[0], ptr[1], ptr[2]);
}