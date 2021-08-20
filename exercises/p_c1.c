#include <stdio.h>
#include <stdlib.h>
#include "p_c1_util.h"

/*
1. malloc a single int, assign value, and print info
2. move print and init functions into a separate source file with .h
3. malloc a larger array, print it out
4. fill it with values, print it out
*/


int main(void) {
    int * pA = createIntArrayWithInitVal(ARRAY_SIZE, 42);

    //*pA = 42;

    // printf("pA address %p pA value is %p de-refd pA is %d\n", &pA, pA, *pA);

    printIntArray(pA, ARRAY_SIZE);

    free(pA);

    return EXIT_SUCCESS;
}