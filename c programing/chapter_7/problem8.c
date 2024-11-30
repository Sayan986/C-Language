//repetat problem  7 using the custom input given by users.

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the values : ");
    scanf("%d %d %d",&a,&b,&c);
    int arr[3][10];
    int mul[]={a,b,c};
    
    

    for (int i=0;i<3;i++){
        for (int j=0;j<10;j++){
            arr[i][j]= mul[i]*(j+1);
        }
    
    }

    for (int i=0;i<3;i++){
        for (int j=0;j<10;j++){
            printf("The multiplication table of arr[i][j is : %d\n", arr[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}