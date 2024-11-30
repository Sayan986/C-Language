#include <stdio.h>

int main(){
    int a;
    printf("Enter the value :");
    scanf("%d", &a);
    for (int i=a; i>0; i--){
        for (int j=0; j<=a-(i-1); j++){
            printf(" ");
        }
        for (int k=1; k<i; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}