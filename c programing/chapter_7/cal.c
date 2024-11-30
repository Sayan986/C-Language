#include<stdio.h>
int sum(int a, int b){
    int s=a+b;
    printf("The sum is : %d",s);
}

int add(int a, int b){
    int p=a-b;
    printf("The sum is : %d",p);

}

int mul(int a, int b){
    int p=a*b;
    printf("The sum is : %d",p);

}

int substraction(int a, int b){
    int p=a/b;
    printf("The sum is : %d",p);

}

int main()
{
    int a,b;
    char c[50];
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);

    printf("Enter the function:");
    scanf("%c",&c);

    if(c=="+"){
        sum(a,b);
    }

    else if(c=="-"){
        add(a,b);
    }

    else if(c=="*"){
        mul(a,b);
    }

    else if(c=="/"){
        substraction(a,b);
    }
    else{
        printf("Enter a valid input!");

    }

    return 0;


}
