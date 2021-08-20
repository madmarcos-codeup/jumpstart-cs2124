#include <stdio.h>
#include <stdlib.h>
#include "p_c1_util.h"

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
