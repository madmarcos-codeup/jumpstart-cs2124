#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

/*
1. malloc an array of int pointers
2. init all pointers to null
3. print all de-refd pointers in array (make function)
4. make an init all int pointer vals function
    that calls an init single element function
5. call printing function
6. make and call a free all function (pointer elements and the array)
*/

int * createNewInt(int newIntVal) {
    int * tempInt = malloc(sizeof(int));
    // TODO: check for null and signal error if null
    // assign newIntVal to the value of what tempInt points to
    *tempInt = newIntVal; // verbalize de-ref as "the value of what tempInt points to"
    return tempInt;
}

void fillIntArray(int ** ints, int arraySize, int fillVal) {
    // iterate over ints
    // call fillIthIntElement on each
    for(int i = 0; i < arraySize; i++) {
        ints[i] = createNewInt(fillVal);
    }
}

void printIntArray(int ** ints, int arraySize) {
    for(int i = 0; i < arraySize; i++) {
        printf("the int pointed to by pointer at index %d is value %d\n", i, *ints[i]);
    }
}

void freeIntArray(int ** ints, int arraySize) {
    for(int i = 0; i < arraySize; i++) {
        // free the pointer element (actually it frees what the pointer points to)
        free(ints[i]);
    }
    // lastly free the top-level array
    free(ints);
}

void setIthIntElementValue(int ** ints, int i, int newVal) {
    // set the ith pointer in ints to the newval
    // BUT if ith pointer IS NOT NULL, free it first
    if(ints[i] != NULL) {
        free(ints[i]);
    }
    ints[i] = malloc(sizeof(int));
    *ints[i] = newVal; // "the value of what the pointer at i points to is assigned newVal"
}

int main(void) {
    // TODO: move to an init function later
    int ** ints = malloc(ARRAY_SIZE * sizeof(int *));
    // init the pointers in the array
    for(int i = 0; i < ARRAY_SIZE; i++) {
        ints[i] = NULL;
    }

    // assign all pointers to some initial int val
    fillIntArray(ints, ARRAY_SIZE, 42);

    // TODO: solve the weird naming problem here
    setIthIntElementValue(ints, 5, 100);

    printIntArray(ints, ARRAY_SIZE);

    freeIntArray(ints, ARRAY_SIZE);

    return EXIT_SUCCESS;
}