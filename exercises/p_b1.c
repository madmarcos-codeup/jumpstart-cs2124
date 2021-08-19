#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

/*
1. declare an array and assign values in a loop (and print elements)
2. declare an array via initializer and print elements
3. print out those values
4. declare pointer and assign it to array
5. print out p, &p, and *p
6. loop and show indexing via subscripts and ptr arithmetic
*/

int main(void) {
    int myGrades [ARRAY_SIZE] = {0};
    int myNums [] = {9999, 100000};

    myGrades[0] = 50;
    myGrades[1] = 80;

    // for(int i = 0; i < ARRAY_SIZE; i++) {
    //     printf("the el at index %d is value %d\n", i, myGrades[i]);
    // }

    printf("address of myGrades %p\n", &myGrades);
    printf("address of myGrades %p\n", &myGrades[0]);
    printf("first element is %d\n", myGrades[0]);
    printf("de-refd first element is %d\n", *myGrades);
    printf("2nd element is %d\n", myGrades[1]);
    printf("de-refd 2nd element is %d\n", *(myGrades + 1));

    int * pGrades = myGrades;
    printf("address of pGrades %p\n", &pGrades);
    printf("address of pGrades %p\n", pGrades);
    printf("first element is %d\n", *pGrades);
    printf("indexed first element is %d\n", pGrades[0]);
    printf("2nd element is %d\n", *(pGrades + 1));
    printf("indexed 2nd element is %d\n", pGrades[1]);

    pGrades = myNums;
    printf("--------------------------------\n");
    
    printf("address of pGrades %p\n", &pGrades);
    printf("address of pGrades %p\n", pGrades);
    printf("first element is %d\n", *pGrades);
    printf("indexed first element is %d\n", pGrades[0]);
    printf("2nd element is %d\n", *(pGrades + 1));
    printf("indexed 2nd element is %d\n", pGrades[1]);

    return EXIT_SUCCESS;
}