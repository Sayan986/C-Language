/*
A
AB
ABC
ABCD
ABCDE
*/

#include<stdio.h>
int main(){
    int a;
    printf("Enter the values:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        char ch = 'A';
        for(int j=1;j<=i;j++){
            printf("%c",ch);
            ch=ch+1;
        }
        printf("\n");
    }
}