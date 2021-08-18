#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

void printIntVals(int ** myArray, int size) {
    for(int i = 0; i < size; i++) {
        if(myArray[i] == NULL) 
            printf("element at index %d = NULL\n", i);
        else
            printf("element at index %d = %d\n", i, *myArray[i]);
    }
}

void initIntValAtIndex(int ** myArray, int index, int initVal) {
    if(myArray[index] != NULL)
        free(myArray[index]);
    myArray[index] = malloc(1 * sizeof(int));
    *myArray[index] = initVal;
}

void initIntVals(int ** myArray, int initVal, int size) {
    for(int i = 0; i < size; i++) {
        initIntValAtIndex(myArray, i, initVal);
    }
}

void freeElements(int ** myArray, int size) {
    for(int i = 0; i < size; i++) {
        free(myArray[i]);
    }
}

int main(void) {
    // 1 (declare an array of pointers
    //   , i.e., a pointer to element 0 which is a pointer
    //   , OR a double pointer)
    //   and init the elements in the array to null
    int ** a = malloc(ARRAY_SIZE * sizeof(int *));

    for(int i = 0; i < ARRAY_SIZE; i++) {
        a[i] = NULL;
    }
    
    printf("elements of a:\n");
    printIntVals(a, ARRAY_SIZE);

    // 2 (init a's elements to dyn alloc ints)
    initIntVals(a, 100, ARRAY_SIZE);
    printf("elements of a:\n");
    printIntVals(a, ARRAY_SIZE);

    // 3 (freeing an array of pointers)
    freeElements(a, ARRAY_SIZE);
    // finally, free a (be sure to first free a's elements!)
    free(a);

    return EXIT_SUCCESS;
}