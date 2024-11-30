/* Write a program to create an array of 10 integers and
 store multiplication table of 
5 in it*/

#include <stdio.h>

int main(){
    int table[10];
    for(int i=0;i<10;i++){
        table[i]=5 * (i+1);
    }

    printf("The multiplication table is : \n");
    for(int j=0;j<10;j++){
        printf("5 x %d = %d\n",j+1,table[j]);
    }
    return 0;
}