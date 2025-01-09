/*
*
**
***  for n=3   till n



*/

#include <stdio.h>
int main()
{
    int i,j,a;
    printf("Enter input:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for (j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}