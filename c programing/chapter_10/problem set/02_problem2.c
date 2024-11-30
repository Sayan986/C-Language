/*2. Write a program to generate multiplication table of a given number in text
format. Make sure that the file is readable and well formatted.*/
#include <stdio.h>
int main(){
    int a;
    printf("enter the number:");

    scanf("%d", &a);

    FILE *ptr;
    ptr=fopen("multiplication_table.txt","w");
    fprintf(ptr, "The multipliication table for %d is : \n",a);
    for (int i=1; i<=10; i++){
        fprintf(ptr, "%d x %d = %d\n",a,i,(a*i)); 
    }
    return 0;
}