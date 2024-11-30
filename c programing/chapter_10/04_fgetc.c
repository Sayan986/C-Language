#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sayan.txt", "r");
    char c = fgetc(ptr);
    printf("%c", c);
    fclose(ptr);
    return 0;
}