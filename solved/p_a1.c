#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // 1 (address of operator)
    int a = 42;
    printf("a: value = %d, address = %p\n", a, &a);

    // 2 (assigning a pointer and dereferencing)
    int * pA = &a;
    printf("pA: value = %p, address = %p, value of what it points to = %d\n", pA, &pA, *pA);

    return EXIT_SUCCESS;
}