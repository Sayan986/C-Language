#include<stdio.h>
int swap(int*,int*);
int swap(int *a, int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
    printf("a=%d\nb=%d\n",*a,*b);
    
}
int main(){
    int a=66;
    int b=98;
    swap(&a , &b);
    return 0;
}