#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int random_num=(rand()%100)+1;
    
    int no_of_guess=0;
    int gussed;
    do{
        printf("Guess the number:");
        scanf("%d",&gussed);
        if(gussed>random_num){
            printf("You entered bigger number! small plz!\n");
        }else{
            printf("You have entered a smaller number! bigger plz!\n");
        }
        no_of_guess++;
    }while(gussed!=random_num);

    printf("You have won the match in %d gusses!",no_of_guess);
}