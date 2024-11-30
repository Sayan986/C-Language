#include <stdio.h>

int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("sayan.txt", "r");
    while (1)
    {
        c = fgetc(ptr);
        printf("%c", c);
        if (c == EOF)
        {
            break;
        }
    }

    return 0;
}