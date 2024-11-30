#include<stdio.h>
int main(){
    int income;
    float tax=0;
    printf("enter your income::");
    scanf("%d",&income);
    if(income<=250000){
        tax=0;
    }else if(income>250000 && income<=500000) {
        tax=0.05*(income-250000);

    }else if(income>500000 && income<=1000000){
        tax=(0.05*(500000-250000))+(0.20*(income-500000));

    }else if (income>1000000){
        tax=(0.05*(1000000-250000))+(0.20*(1000000-500000))+(0.30*(income-5000000));
    }
    printf("you have to pay a tax of total :%.3f",tax);
    return 0;
}