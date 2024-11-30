#include <stdio.h>
#include<string.h>

int main(){
    char str[]="Nz!jotub!qbttxpse!jt!:76769:Atbzbo";
    for (int i=0; i<strlen(str); i++){
        str[i]=str[i]-1;        //decription
    }
    printf("The secret is : %s",str);
    return 0;
}