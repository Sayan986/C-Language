//convert celcius to farenhite
#include<stdio.h>
int main()
{
    float farenhite,celcius;
    printf("Enter the temperature in celcuis:");
    scanf("%f",&celcius);
    farenhite=(celcius*9/5)+32;
    printf("The farenhite temperature is : %f",farenhite);
    return 0;
}