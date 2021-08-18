#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

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

int * initIntArray2(int * myArray, int initVal, int size) {
    for(int i = 0; i < size; i++) {
        myArray[i] = initVal;
    }
    return myArray;
}

int * initIntArray3(int initVal, int size) {
    int myArray[size];
    for(int i = 0; i < size; i++) {
        myArray[i] = initVal;
    }
    return myArray;
}

int main(void) {
    // 1 (passing an array to a function)
    int a[ARRAY_SIZE];

    printf("contents of a:\n");
    printIntArray(a, ARRAY_SIZE);

    // 2 (array contents can be changed in a function)
    printf("initialized contents of a:\n");
    initIntArray1(a, 0, ARRAY_SIZE);
    printIntArray(a, ARRAY_SIZE);

    // 3 (function that returns an array as a pointer)
    int b[ARRAY_SIZE];
    int * pB = initIntArray2(b, 100, ARRAY_SIZE);
    printf("initialized contents of pB:\n");
    printIntArray(pB, ARRAY_SIZE);

    // 4 returning a function local pointer (BAD)
    int * p1 = initIntArray2(b, 100, ARRAY_SIZE);
    int * p2 = initIntArray2(b, 200, ARRAY_SIZE);
    printf("initialized contents of p1:\n");
    printIntArray(p1, ARRAY_SIZE);
}