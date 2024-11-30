//function to convert celcius to farenhite
//farenhite=(celcius*9/5)+32;
#include<stdio.h>

int convert(float);
int convert(float celcius){
    float farenhite=(celcius*9/5)+32;
    printf("The temperature in f is : %.2f",farenhite); //%.2f is used instead of %f because of to take the value of 2 number after point(float)
}






int main()
{
    float celcius;
    printf("Enter the celcuis temperature:");
    scanf("%f",&celcius);
    convert(celcius);
    return 0;
}