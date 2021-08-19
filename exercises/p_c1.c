#include <stdio.h>
#include <stdlib.h>
// #include "p_c1_util.h"

#define ARRAY_SIZE 100

/*
1. malloc a single int, assign value, and print info
STILL TODO ITEM 2 BELOW!!!
2. move print and init functions into a separate source file with .h
3. malloc a larger array, print it out
4. fill it with values, print it out
*/

// create int array of a specified sized and init the val to initVal
int * createIntArrayWithInitVal(int arraySize, int initVal) {
    int * newArray = malloc(arraySize * sizeof(int));
    for(int i = 0; i < arraySize; i++) {
        newArray[i] = initVal;
    }
    return newArray;
}

// prints out the given # of elements to console
void printIntArray(int * ints, int numInts) {
    for(int i = 0; i < numInts; i++) {
        printf("the int at index %d is value %d\n", i, ints[i]);
    }
}

int main(void) {
    int * pA = createIntArrayWithInitVal(ARRAY_SIZE, 42);

    //*pA = 42;

    // printf("pA address %p pA value is %p de-refd pA is %d\n", &pA, pA, *pA);

    printIntArray(pA, ARRAY_SIZE);

    free(pA);

    return EXIT_SUCCESS;
}