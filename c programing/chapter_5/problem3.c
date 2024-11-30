//function to calculate  attraction on the body of mass m exerted by earth (take g=9.8m/s^2)
//f=mg
#include<stdio.h>
#define gravity 9.8

int force(int);
int force(int m){
    float force=m*gravity;
    printf("The force is : %.2f N",force);
}

int main()
{
    int mass;
    printf("Enter the mass (KG) of the body:");
    scanf("%d",&mass);
    force(mass);
}