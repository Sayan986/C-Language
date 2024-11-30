//strucure formate to store employee data
#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    char name [10];
    float salary;
};


int main(){
    struct employee e1, e2;

    e1.code=3873;
    strcpy(e1.name, "Sayan");
    e1.salary=45000.00;


    //the same can be written as : struct employee e1 = {34,"sayan", 56000};

    
    printf("Employee code: %d\nEmployee name:%s\nemployee salary:%.2f", e1.code, e1.name,e1.salary);
    return 0;
}