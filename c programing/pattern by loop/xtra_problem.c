#include <stdio.h>

int main(){
    float a, b, temp;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    temp=a;
    a=b;
    b=temp;
    printf("a= %f\n",a);
    printf("b=%f",b);
    return 0;
}
