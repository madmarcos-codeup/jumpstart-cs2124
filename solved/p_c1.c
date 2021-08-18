#include <stdio.h>
#include <stdlib.h>
#include "p_c1_util.h"

#define ARRAY_SIZE 10

int main(void) {
    // 1 (malloc, sizeof, free)
    int * a = malloc(1 * sizeof(int));
    *a = 42;
    printf("a: value = %p, address = %p, value of what it points to = %d\n", a, &a, *a);

    free(a);

    // 2 (dyn alloc array, reuse init and print)
    a = malloc(ARRAY_SIZE * sizeof(int));
    printf("elements of a:\n");
    printIntArray(a, ARRAY_SIZE);
    
    initIntArray1(a, 100, ARRAY_SIZE);
    printf("elements of a:\n");
    printIntArray(a, ARRAY_SIZE);

    free(a);

    return EXIT_SUCCESS;
}