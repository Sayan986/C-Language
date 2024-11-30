#include <stdio.h>

typedef struct emp{
    int code;
    char name[10];
    float salary;
}employee;


int main(){
    employee sayan={12,"Sayan",45000.0};
    employee *ptr;
    ptr=&sayan;
    printf("%d", ptr->code);     //printf("%d", (*ptr).code);
    return 0;
}