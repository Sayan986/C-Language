/*Write a function slice() to slice a string. It should change the original string such
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
for slice.*/

#include <stdio.h>
char slice(char str[], int x, int y)
{
    char* ptr1 = &str[x];
    char* ptr2 = &str[y];

    *str= str[x];
    str[y]='\0';
    printf("%s",str);


}

int main()
{
    char str[] = "Sayanmaiti";
    slice(str, 0, 11);
}