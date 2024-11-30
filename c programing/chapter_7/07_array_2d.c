//create a 2d array and take input from user and 
//use display function to print the array content.
#include<stdio.h>
int main()
{
    int arr_2d[3][2];
    for (int i = 0; i < 3; i++)
    {
        for(int j=0;j<2;j++){
            printf("Enter the value for arr[%d][%d]:",i,j);
            scanf("%d",&arr_2d[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for(int j=0;j<2;j++){
            printf("The value for arr[%d][%d]:%d\n",i,j, arr_2d[i][j]);
    
        }
       
    } 
    return 0;

}