/*
*****
 ***
  *
for n=4


*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter the value:");
    scanf("%d",&n);
    for (int i=n;i>0;i--){
        for(int k=1;k<(n-(i-1));k++){
            printf(" ");
        }
        for (int j=1;j<=(2*i)-1;j++){
            printf("*");
        }
        printf("\n");
    }
}