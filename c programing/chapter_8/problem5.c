//own version of strcpy
#include <stdio.h>
#include <string.h>


void my_strcpy(char target[],char source[]){
    for (int i=0; i<strlen(source);i++){
        target[i]=source[i];
    }
    target[strlen(source)]='\0';
}
int main(){
    char str[]="sayan";
    char b[10];
    my_strcpy(b,str);
    printf("%s %s" ,b,str);
}