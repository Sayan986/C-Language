// create  a 2 dimentional vector in c
#include<stdio.h>
struct vector {
    int i;
    int j;
};
int main()
{
    struct vector v = {24, 65};
    printf("the vector is %d i and %d j.", v.i,v.j);

}