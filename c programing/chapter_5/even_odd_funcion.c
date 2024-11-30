//function to check even_odd

#include<stdio.h>

int check(int);
int check(int x){
    if(x==0){
        printf(" %d is neither even nor odd number...",x);
}
    else if (x % 2 == 0 )
    {
    printf("%d is a even number;",x);
    }
    else{
        printf("%d is a odd number;",x);
    }
    return 0;
}


int main() {
    int x;
    printf("ENter the number:");
    scanf("%d",& x);
    check(x);
}