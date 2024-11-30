#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("sayan.txt", "a");
    int num=45;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;
}