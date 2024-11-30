//use a library func to calculate the area of a a square
#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter the side length of the square:");
    scanf("%d",&a);
    printf("The Area of the square is : %f", pow(a,2)); 
    
    //pow is a function which claculate the square, if we want a^2, 
    //then we have to use pow(a,2)
    // %f is used because pow function return float value
}