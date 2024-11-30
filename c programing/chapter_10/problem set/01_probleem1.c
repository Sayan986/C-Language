// wap too read 3 int fromm  a file
/*#include <stdio.h>

int main(){
    FILE *fptr;
    int num1, num2, num3;
    fptr = fopen("sayan.txt", "r");
    fscanf(fptr, "%d %d %d", &num1, &num2, &num3); 
    printf("The values are %d %d %d \n", num1, num2, num3);
    
    fclose(fptr);
    return 0;
}

*/


#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sayan.txt", "r");
    int num;
    for (int i = 0; i < 3; i++)
    {
        fscanf(ptr, "%d", &num);
        printf("the number  is : %d\n", num);
    }
    return 0;
}