#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int player, computer;
    computer = rand() % 3;
    printf("Press 0 for snake, 1 for water, 2 for gun!\n");

    printf("Enter your input: ");
    scanf("%d", &player);

    if (player == computer) {
        printf("Its a draw!\n");
    } else if (player == 0 && computer == 1) {
        printf("You have won!\n");
    } else if (player == 0 && computer == 2) {
        printf("You have lost!\n");
    } else if (player == 1 && computer == 0) {
        printf("You have lost!\n");
    } else if (player == 1 && computer == 2) {
        printf("You have won!\n");
    } else if (player == 2 && computer == 0) {
        printf("You have won!\n");
    } else if (player == 2 && computer == 1) {
        printf("You have lost!\n");
    } else {
        printf("Please enter a valid input!\n");
    }

    return 0;
}
