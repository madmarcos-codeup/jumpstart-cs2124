#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main(void) {
    // 1 (declaring and iterating over an array)
    int a[ARRAY_SIZE];
    
    for(int i = 0; i < ARRAY_SIZE; i++) {
        a[i] = i+1;
        printf("a[%d] = %d\n", i, a[i]);
    }

    // 2 (array initializers)
    int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for(int i = 0; i < ARRAY_SIZE; i++) {
        printf("b[%d] = %d\n", i, b[i]);
    }

    // 3 (arrays are SIMILAR to pointers, but not quite same thing)
    printf("a: value = %p, address = %p, address of element 0 = %p\n", a, &a, &a[0]);

    int * p = a;

    printf("p: value = %p, address = %p, value of what p points to = %d\n", p, &p, *p);

    // 4 (2 ways to index pointers)
    for(int i = 0; i < ARRAY_SIZE; i++) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    for(int i = 0; i < ARRAY_SIZE; i++) {
        printf("value of what (p + %d) points to = %d\n", i, *(p + i));
    }

    return EXIT_SUCCESS;
}