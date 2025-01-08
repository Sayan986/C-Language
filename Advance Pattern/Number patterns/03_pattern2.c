/*
     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5

 print the pattern
*/

#include <stdio.h>

int main(){
    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf(" %d",k);
        }
        printf("\n");
    }
    return 0;
}