/* Create an array dynamically capable of storing 5 integers. Now use realloc so
that it can now store 10 integers. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 5;
    int *ptr;

    ptr = (int *)calloc(a, sizeof(int));
    if (ptr == NULL) return 1;

    for (int i = 0; i < a; i++) {
        printf("Enter the value for ptr[%d]: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\nStored values (first 5 elements):\n");
    for (int j = 0; j < a; j++) {
        printf("ptr[%d] = %d\n", j, ptr[j]);
    }

    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    if (ptr == NULL) return 1;

    for (int i = a; i < 10; i++) {
        printf("Enter the value for ptr[%d]: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\nStored values (all 10 elements):\n");
    for (int j = 0; j < 10; j++) {
        printf("ptr[%d] = %d\n", j, ptr[j]);
    }

    free(ptr);
    return 0;
}
