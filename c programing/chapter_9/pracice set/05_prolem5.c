// Write a program with a structure representing a complex number.
#include <stdio.h>
typedef struct c
{
    int real;
    int imaginary;
} complex;
int main()
{
    complex x = {10, 11};
    printf("the complex number is : %d + %di", x.real, x.imaginary);
}