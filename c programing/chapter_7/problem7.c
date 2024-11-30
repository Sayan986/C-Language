//Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
//and 9 respectively.
#include <stdio.h>

int main(){
    int arr[3][10];
    int mul[]={2,7,9};
    for (int i=0;i<3;i++){
        for (int j=0;j<10;j++){
            arr[i][j]=mul[i]*(j+1);

        }
        printf("\n");
    }

    for (int i=0;i<3;i++){
        for (int j=0;j<10;j++){
            printf("The multiplication table of arr[i][j] is : %d\n", arr[i][j]);

        }
    }

}
