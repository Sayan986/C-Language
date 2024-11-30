#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("sayan.txt", "a");
    fputc('c', ptr);
    fclose(ptr);
    return 0;
}