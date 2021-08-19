#include <stdio.h>
#include <stdlib.h>

/*
1. declare an int
2. print out its value and address
3. declare an int pointer and assign it to #1's address
4. print out its info
*/

int main(void) {
    int myInt = 42;
    int * myPointer = &myInt;

    printf("the pointers address is %p\n", &myPointer);
    printf("the pointers value %p\n", myPointer);
    printf("the address of myInt is %p\n", &myInt);
    printf("the value of what it points to is %d\n", *myPointer);


    return EXIT_SUCCESS;
}