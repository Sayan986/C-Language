/*
1 2 3 4 5
 1 2 3 4
  1 2 3
   1 2
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
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
            printf(" %d",j);
        }
        printf("\n");
    }
    for(int i=2;i<=a;i++){
        for(int k=1;k<=a-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf(" %d",j);
        }
        printf("\n");
    }
}