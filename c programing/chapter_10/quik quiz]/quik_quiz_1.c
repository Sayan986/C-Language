// modify while the file exist or not

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sayan2.txt", "r");
    if (ptr == NULL)
    {
        printf("The file doesnot exist!\n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("the value of num is : %d\n", num);
        fclose(ptr);
        
    }return 0;
}
