/*
//print multiplicaytion tableusing while and for loop

#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the value: ");
    scanf("%d", &n);
    for(i = 1; i <= 10; i++) {  // Start from 1 to n for natural numbers
        printf(" %d x %d = %d\n",n,i,n*i);
    }
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value:");
    scanf("%d",& n);
    i=1;
    while(i<=10){
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}

