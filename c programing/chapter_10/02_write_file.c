#include <stdio.h>

int main(){
    FILE *ptr;

    ptr=fopen("sayan.txt", "w");
    int num=100;
    fprintf(ptr , "%d", num);
    fclose(ptr);
    return 0;
}