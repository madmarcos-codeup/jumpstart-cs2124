#include <stdio.h>
#include <stdlib.h>

/*
1. declare an int and print out its value and address
2. make a function and try to change the int's value
3. print out its info
4. make a function and try to change the int's value by address
5. print out its info
*/

void foo1(int myInt) {
    printf("myInt address %p value %d\n", &myInt, myInt);
    myInt = 100;
    printf("myInt address %p value %d\n", &myInt, myInt);
}

void foo2(int * pInt) {
    printf("pInt address %p value %p value of what p points to %d\n", &pInt, pInt, *pInt);
    *pInt = 100;
    printf("pInt address %p value %p value of what p points to %d\n", &pInt, pInt, *pInt);
}

int main(void) {
    int a = 42;
    printf("a addr %p a value %d\n", &a, a);

    foo1(a);
    printf("a addr %p a value %d\n", &a, a);

    foo2(&a);
    printf("a addr %p a value %d\n", &a, a);

    return EXIT_SUCCESS;
}