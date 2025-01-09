/*

12345
1234
123
12
1
Write a program to print this
*/
#include <stdio.h>

int main(){
    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    for(int i=a;i>0;i--){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}