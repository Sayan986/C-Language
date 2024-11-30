#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee facebook[10];
    facebook[0].code=100;
    facebook[1].code=50;
    struct employee sayan={100, 4550000, "sayan"};
   
    printf("%d %.2f %s",sayan.code, sayan.salary, sayan.name); 
    return  0;
}