//Write a program containing a function which reverses the array passed to it

#include<stdio.h>
void printarray(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");

}

void reverse(int arr[], int n){
    int temp;
    for (int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;

    }
}

int main()
{
    int a[]={1,2,3,4,5,6};
    printarray(a,6);
    reverse(a, 6);
    printarray(a, 6);
}