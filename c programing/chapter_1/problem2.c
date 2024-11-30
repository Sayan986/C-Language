//area of circle
#include<stdio.h>
int main(){
    int r;
    float area;
    printf("enter the radius of the circle:");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("The area of the circle is : %f",area);
    return 0;
}