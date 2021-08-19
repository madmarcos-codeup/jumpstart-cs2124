#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

/*
1. declare an array
2. make array printing function and call it
3. make an array init function and print the array
4. make an array init function that returns a pointer of the array
5. print it
6. make an array init function that returns a function local array (bad)
7. call the bad function twice with 2 different ptr vars and print the results
*/

void printIntArrayElements(int * x, int arraySize) {
    // printf("3rd element in x is %d\n", x[2]);
    // printf("size of array x is %d\n", sizeof(x));
    for(int i = 0; i < arraySize; i++) {
        printf("the element %d in x is %d\n", i, x[i]);
    }
}

void initIntArrayElements(int * arrayOfInts, int arraySize, int initVal) {
    // init elements of array to initVal
    for(int i = 0; i < arraySize; i++) {
        arrayOfInts[i] = initVal;
    }
}

int * initIntArrayElements2(int * arrayOfInts, int arraySize, int initVal) {
    // init elements of array to initVal
    for(int i = 0; i < arraySize; i++) {
        arrayOfInts[i] = initVal;
    }
    return arrayOfInts;
}

int * createNewArrayWithInitBAD(int arraySize, int initVal) {
    // create a new array with all elements = to initVal
    int newArray[arraySize];
    int myInt = 42;

    for(int i = 0; i < arraySize; i++) {
        newArray[i] = initVal;
    }
    return &myInt;
}

int main(void) {
    int a[ARRAY_SIZE];

    // initIntArrayElements(a, ARRAY_SIZE, -1);
    int * pA = initIntArrayElements2(a, ARRAY_SIZE, -1);
    pA[1] = 100;
    pA[2] = 200;
    printIntArrayElements(pA, ARRAY_SIZE);

    // int * pB = createNewArrayWithInitBAD(ARRAY_SIZE, 100);
    // // int * pC = createNewArrayWithInitBAD(ARRAY_SIZE, 200);
    // printIntArrayElements(pB, ARRAY_SIZE);

    // printf("3rd element in a is %d\n", a[2]);
    // printf("size of array a is %d\n", sizeof(a));

    // printIntArrayElements(a, ARRAY_SIZE);

    return EXIT_SUCCESS;
}