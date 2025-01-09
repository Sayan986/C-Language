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
        for(int j=1;j<=i;j++){
            printf("%c",ch);
            ch=ch+1;
        }
        printf("\n");
    }
}