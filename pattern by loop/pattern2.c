/*
1
12
123
1234
for input from user =4
*/

#include <stdio.h>
int main()
{
    int a;
    printf("Enter input:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for (int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}