//Write a programme which counting a function which count positive integers in an array
#include<stdio.h>

int count(int arr[],int n){
    int no_of_positive_int= 0;
    for (int i=0; i<n; i++){
        if(arr[i]>0){
            no_of_positive_int++;
        } 
    }
    return no_of_positive_int;
}

int main(){
    int a[]={1,2,3,-4,5,-6,-7,8};
    printf("The number of positive integers in array is : %d",count(a,8));
}