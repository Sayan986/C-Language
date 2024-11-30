//Write a program to encrypt a string by adding 1 to the ascii value of its
//characters
#include <stdio.h>
#include<string.h>

int main(){
    char c[]= "My insta password is 9656589@sayan";
    for(int i=0; i<strlen(c);i++){
        c[i]=c[i]+1;           //adding 1 to ascii value {encription}
    }
    printf("%s",c);
    return 0;
}