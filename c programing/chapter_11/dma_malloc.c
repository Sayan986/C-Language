#include <stdio.h>
#include<stdlib.h>
int main(){
    int a;
    printf("Enter the value:");
    scanf("%d", &a);
    int *ptr;
    ptr=(int*) malloc (a * sizeof(int));
    ptr[0]=1;
    printf("%d", ptr[0]);
    return 0;
}