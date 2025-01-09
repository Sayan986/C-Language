/*
12345
 1234
  123
   12
    1
   12
  123
 1234
12345
*/
#include<stdio.h>
int main()
{
    int a; 
    printf("Enter the value:");
    scanf("%d",&a);
    for(int i=a;i>0;i--){
        for(int k=1;k<=a-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=2;i<=a;i++){
        for(int k=1;k<=a-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}