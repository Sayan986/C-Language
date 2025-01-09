/*
ABCDE
 ABCD
  ABC
   AB
    A
*/
#include<stdio.h>
int main(){
    int a;
    printf("Enter the values:");
    scanf("%d",&a);
    for(int i=a;i>0;i--){
        char ch = 'A';
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%c",ch);  //there is no space after %c
            ch=ch+1;
        }
        printf("\n");
    }
}