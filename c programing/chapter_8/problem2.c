/*Write a program to take string as an input from the user using %c and %s confirm
that the strings are equal.*/
#include<stdio.h>
int main()
{
    char str[6];
    for (int i=0; i<5;i++){
        printf("Enter charecter:");
        scanf("%c",&str[i]);
        fflush(stdin);
    }
    str[5]='\0';
    printf("%s\n",str);
    char a[10];
    printf("enter the string:");
    scanf("%s",a);
    printf("The string is : %s",a);
    return 0;
}