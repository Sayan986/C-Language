/*Take name and salary of two employees as input from the user and write them to
a text file in the following format:
i. Name1, 3300
ii. Name2, 7700
*/
#include <stdio.h>

typedef struct emp {
    char name[50];
    int salary;
} employee;

int main() {
    employee e1, e2;

    printf("Enter the name for employee 1: ");
    scanf("%s", e1.name);
    printf("Enter the salary for employee 1: ");
    scanf("%d", &e1.salary);
    printf("Enter the name for employee 2: ");
    scanf("%s", e2.name);
    printf("Enter the salary for employee 2: ");
    scanf("%d", &e2.salary);

    FILE *ptr;
    ptr = fopen("employee.txt", "a");
   
    fprintf(ptr, "i) Name: %s, Salary: %d\nii) Name: %s, Salary: %d\n", e1.name, e1.salary, e2.name, e2.salary);
    fclose(ptr);
    
    return 0;
}
