#include <stdio.h>

int main() {
    int num_times;

    // Get the number of times to print the message from the user
    printf("Enter the number of times to print 'I love you, baby': ");
    scanf("%d", &num_times);

    // Print the message the specified number of times
    for (int i = 0; i < num_times; i++) {
        printf("I love you, baby\n");
    }

    return 0;
}
