/*
A B C D E
 A B C D
  A B C
   A B
    A
   A B
  A B C
 A B C D
A B C D E
*/

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the values:");
    scanf("%d",&a);
    for(int i=a;i>0;i--){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        char ch='A';
        for(int k=1;k<=i;k++){
            printf("%c ",ch);  //there is a space after %c
            ch = ch+1;
        }
        printf("\n");
    }
    //reverse
    for(int i=2;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        char ch='A';
        for(int k=1;k<=i;k++){
            printf("%c ",ch);  //there is a space after %c
            ch = ch+1;
        }
        printf("\n");
    }
}