#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    for (int i=0; i<a;i++){
        int f=(2*i)+1;
        for(int j=0;j<f;j++){
            printf("*");
        }
        printf("\n");

    }

}