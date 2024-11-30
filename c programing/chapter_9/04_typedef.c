#include <stdio.h>

typedef struct employee
{
    int code;
    char name[10];
    float salary;
} Emp;
int main()
{
    Emp e1 = {2, "Sayan", 60000};
    printf("%d\n%s\n%.2f", e1.code, e1.name, e1.salary);
    return 0;
}