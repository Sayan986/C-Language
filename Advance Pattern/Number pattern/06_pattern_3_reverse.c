/*
    12345
     1234
      123
       12
        1
*/
#include<stdio.h>
int main()
{
    int a; 
    printf("Enter the value:");
    scanf("%d",&a);
    for(int i=a;i>0;i--){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        printf("\n");
    }
}