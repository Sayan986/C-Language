/*. Write a program to dynamically create an array of size 6 capable of storing 6 
integers. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 6;  // Array size
    ptr = (int*)malloc(n * sizeof(int));  // Dynamic memory allocation


    for (int i = 0; i < n; i++) {
        printf("Enter the value for ptr[%d]: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\nStored values:\n");
    for (int j = 0; j < n; j++) {
        printf("ptr[%d] = %d\n", j, ptr[j]);
    }

    free(ptr);  // Free allocated memory
    return 0;
}
