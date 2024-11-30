//check while a charceter is present in a string or not
#include<stdio.h>

#include<string.h>
int main(){
    char c='d';
    char str[]="Saaayan";
    int contains=0;
    for (int i=0;i<strlen(str);i++){
        if(str[i]==c){
            contains=1;
            break;
        }
    }
    if (contains){
        printf("The charecter is present\n");
    }else{
        printf("the charceter is not present\n");
    }
    

    return 0;
}