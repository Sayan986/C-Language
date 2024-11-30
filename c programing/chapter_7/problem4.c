/*Repeat problem 3 for a general input provided by the user using scanf.*/
#include <stdio.h>

int main(){
    int table[10];
    int a;
    printf("Enter the value : ");
    scanf("%d",&a);
    for(int i=0; i< 10; i++){
        table[i] = a * (i+1);
    }
    printf("The table of %d is : \n",a);
    for(int j =0; j<10; j++){
        printf("%d x %d = %d\n",a,j+1,table[j]);
    }
    return 0;
}
