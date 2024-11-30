//wap to store the data of 3 employye by structure user defined
#include <stdio.h>
struct employee{
    int code;
    char name[10];
    float salary;
};
int main(){
    struct employee e1,e2,e3;
    //for enmployee e1
    printf("Enter the code:");
    scanf("%d",&e1.code);
    printf("Enter the name:");
    scanf("%s",&e1.name);
    printf("Enter salary:");
    scanf("%f",&e1.salary);
    printf("\nFor first employee:\nEmployee code: %d\nEmployee name:%s\nemployee salary:%.2f\n\n\n", e1.code, e1.name,e1.salary);
    
 //for enmployee e2
    printf("Enter the code:");
    scanf("%d",&e2.code);
    printf("Enter the name:");
    scanf("%s",&e2.name);
    printf("Enter salary:");
    scanf("%f",&e2.salary);
    printf("\nFor second employee:\nEmployee code: %d\nEmployee name:%s\nemployee salary:%.2f\n\n\n", e2.code, e2.name,e2.salary);
    

 //for enmployee e3
    printf("Enter the code:");
    scanf("%d",&e3.code);
    printf("Enter the name:");
    scanf("%s",&e3.name);
    printf("Enter salary:");
    scanf("%f",&e3.salary);
    printf("\nFor first employee:\nEmployee code: %d\nEmployee name:%s\nemployee salary:%.2f\n", e3.code, e3.name,e3.salary);
    
    return 0;
}