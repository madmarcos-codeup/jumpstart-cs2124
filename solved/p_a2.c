#include <stdio.h>
#include <stdlib.h>

void changeIntVal1(int intVal, int toVal) {
    printf("intVal before: value = %d, address = %p\n", intVal, &intVal);
    intVal = toVal;
    printf("intVal after: value = %d, address = %p\n", intVal, &intVal);
}

void changeIntVal2(int * intVal, int toVal) {
    printf("intVal before: value = %d, address = %p\n", *intVal, intVal);
    *intVal = toVal;
    printf("intVal after: value = %d, address = %p\n", *intVal, intVal);
}

int main(void) {
    // 1 (trying to change an argument's value without a pointer)
    int a = 42;
    printf("a before: value = %d, address = %p\n", a, &a);

    changeIntVal1(a, 100);
    printf("a after: value = %d, address = %p\n", a, &a);

    // 2 (changing an argument's value via pointer)
    changeIntVal2(&a, 100);
    printf("a after: value = %d, address = %p\n", a, &a);

    return EXIT_SUCCESS;
}