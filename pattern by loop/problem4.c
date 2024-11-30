/*
1
23
456 for n=3
*/

#include <stdio.h>

int main()
{
    int n;
    int num = 1;
    if (n == 0)
    {
        printf("0");
    }
    else
    {

        printf("Enter the value:");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d", num);
                num++;
            }
            printf("\n");
        }
        return 0;
    }
}