/*

1
12
123
1234
12345
Write a program to print this
*/
#include <stdio.h>

int main(){
    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}