/*Write a program to modify a file containing an integer to double its value.*/

#include <stdio.h>

int main(){
    FILE     *ptr;
    ptr=fopen("int.txt", "r");
    int a;
    fscanf(ptr, "%d", &a);
    fclose(ptr);

    fopen("int.txt", "a");
    fprintf(ptr, "The doube is ; %d\n", a*2);
    fclose(ptr);
    return 0;
}