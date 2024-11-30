//

#include<stdio.h>

typedef struct c{
    int real;
    int imaginary;
}complex;

void display(complex c){
    printf("The complex number is : %d + %di\n", c.real, c.imaginary);
}

int main(){
    complex arr[5];
    for (int i = 0 ; i <5; i++){
        printf("Enter the real number :");
        scanf("%d", &arr[i].real);
        printf("ENter the imaginary number :");
        scanf("%d", &arr[i].imaginary); 
        display(arr[i]);
    }
    return 0;
}