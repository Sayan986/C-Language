#include <stdio.h>
struct employee
{
    int code;
    char name [10];
    float salary;
};

int main(){
    struct employee e1;
    e1.code=24;
    struct employee *ptr;
    ptr=&e1;        //address of e1
    printf("%d", (*ptr).code);
}