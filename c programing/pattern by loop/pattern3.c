/*
a
ab
abc
abcd
for n=4
*/




#include <stdio.h>
int main()
{
    int i,j,a;
    printf("Enter input:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for (j=1;j<=i;j++){
            printf("%c",'a'+(j-1));
        }
        printf("\n");
    }
}