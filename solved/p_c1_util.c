#include <stdio.h>
#include <stdlib.h>
#include "p_c1_util.h"

void printIntArray(int * myArray, int size) {
    for(int i = 0; i < size; i++) {
        printf("element at index %d = %d\n", i, myArray[i]);
    }
}

void initIntArray1(int * myArray, int initVal, int size) {
    for(int i = 0; i < size; i++) {
        myArray[i] = initVal;
    }
}