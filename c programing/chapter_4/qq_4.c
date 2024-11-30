#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the value: ");
    scanf("%d", &n);
    for(i=n;i;i--) {  // Start from 1 to n for natural numbers
        printf("The number is: %d\n", i);
    }
    return 0;
}
