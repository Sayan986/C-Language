#include<stdio.h>
int main()
{
    int arr[]={35,78,25,65,45};
    int* ptr = &arr[0];
    for(int i=0;i<5;i++){
        printf("the marks at index %d is %d\n",i,*ptr);
        ptr++;
    }
}